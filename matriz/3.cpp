#include <iostream>
//@012 L2 - Deu a louca no Imperador!
using namespace std;

void ler_matriz(char matriz[][5], int no_linhas, int no_colunas)
{
    for (int i = 0; i < no_linhas; i++)
    {
        for (int j = 0; j < no_colunas; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void imprimir_matriz(char matriz[][5], int no_linhas, int no_colunas)
{
    for (int i = 0; i < no_linhas; i++)
    {
        for (int j = 0; j < no_colunas; j++)
        {
            cout << matriz[i][j] << " ";
        }
    }
}

void procurar_leao(char matriz[][5], int no_linhas, int no_colunas)
{
    for (int i = 0; i < no_linhas; i++)
    {
        for (int j = 0; j < no_colunas; j++)
        {
            if (matriz[i][j] == 'L')
            {
                for (int k = 0; k < no_colunas; k++)
                {
                    matriz[i][k] = '*';
                }
            }
        }
    }
}
// function that represent the matrix

int jogo(char arena[][5], int no_linhas, int no_colunas)
{
    int pontuacao_condenador = 0, pontuacao_gladiador = 0;
    for (int i = 0; i < no_linhas; i++)
    {
        for (int j = 0; j < no_colunas; j++)
        {
            if (arena[i][j] = 'C')
            {
                if (i + j == no_linhas - 1)
                {
                    pontuacao_condenador += 2;
                }
                else
                {
                    pontuacao_condenador += 1;
                }
            }
            else if (arena[i][j] = 'G')
            {
                pontuacao_gladiador += 2;
            }

            if (pontuacao_condenador > pontuacao_gladiador)
            {
                return 1;
            }
            else if (pontuacao_condenador == pontuacao_gladiador)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
    }
    return 1;
}

int main()
{
    char arena[5][5];
    int n;
    cin >> n;
    ler_matriz(arena, n, n);
    int resultado = jogo(arena, n, n);
    if (resultado == 1)
    {
        cout << "Condenados a morte"
                "\n";
    }
    else if (resultado == 0)
    {
        cout << "Ninguem"
                "\n";
    }
    else if (resultado == -1)
    {
        cout << "Gladiadores"
                "\n";
    }
}
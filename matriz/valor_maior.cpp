#include <iostream>

using namespace std;
//@191 L2 - Coluna de Valor Maior
// funcoes para a matriz
/*matriz: passagem a de parametro é por referencia
 significa que qualquer atreacao feita na funcao vai fefletir fora da funcoes*/

void ler_matriz(int matriz[][3], int no_linhas, int no_colunas)
{
    for (int i = 0; i < no_linhas; i++)
    {
        for (int j = 0; j < no_colunas; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

// retornar a coluna com o maior
int coluna_maior(int matriz[][3], int n)
{
    int soma_coluna = 0, maior_valor = -1, indice_maior_valor = -1;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            soma_coluna += (matriz[i][j] * matriz[i][j]);
        }
        if (soma_coluna > maior_valor)
        {
            maior_valor = soma_coluna;
            indice_maior_valor = j;
        }
        soma_coluna = 0;
    }
    return indice_maior_valor;
}

// this has to be completed something is missing

int main()
{
    int n, matriz[3][3];
    cin >> n;
    coluna_maior;

    cout << coluna_maior;

    ler_matriz(matriz, n, n);
}
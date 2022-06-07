#include <iostream>

using namespace std;

// funcoes para a matriz
/*matriz: passagem a de parametro é por referencia
 significa que qualquer atreacao feita na funcao vai fefletir fora da funcoes*/

void ler_matriz(int matriz[][200], int no_linhas, int no_colunas)
{
    for (int i = 0; i < no_linhas; i++)
    {
        for (int j = 0; j < no_colunas; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

void imprimir_matriz(int matriz[][200], int no_linhas, int no_colunas)
{
    for (int i = 0; i < no_linhas; i++)
    {
        for (int j = 0; j < no_colunas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int matriz[200][200], no_linhas, no_colunas;
    cin >> no_linhas >> no_colunas;
    ler_matriz(matriz, no_linhas, no_colunas);
    imprimir_matriz(matriz, no_linhas, no_colunas);
}
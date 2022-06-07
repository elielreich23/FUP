#include <iostream>

using namespace std;
//@131

void ler_matriz(int matriz[][100], int no_linhas, int no_colunas)
{
    for (int i = 0; i < no_linhas; i++)
    {
        for (int j = 0; j < no_colunas; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

// int eh_transportada()

int main()
{
    int matriz[3][3];
    ler_matriz;
}
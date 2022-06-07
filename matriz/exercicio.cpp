#include <iostream>
//@130 L2 - Bingo
using namespace std;

int esta_contido(int matriz[][4], int no_linhas, int no_colunas, int elemento)
{
    for (int i = 0; i < no_linhas; i++)
    {
        for (int j = 0; j < no_colunas; j++)
        {
            if (matriz[i][j] == elemento)
                return 1;
        }
    }
    return -1;
}

int main()
{
    int m[4][4];
    m[0][0] = 1;
    m[0][1] = 9;
    m[0][2] = 27;
    m[0][3] = 23;
    m[1][0] = 34;
    m[1][1] = 20;
    m[1][2] = 37;
    m[1][3] = 47;
    m[2][0] = 30;
    m[2][1] = 87;
    m[2][2] = 55;
    m[2][3] = 69;
    m[3][0] = 13;
    m[3][1] = 60;
    m[3][2] = 99;
    m[3][3] = 66;

    int contador = 0, elemento;
    for (int i = 0; i < 6; i++)
    {
        cin >> elemento;
        if (esta_contido(m, 4, 4, elemento) == 1)
        {
            contador++;
        }
    }
    cout << contador;
}
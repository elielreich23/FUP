#include <iostream>
using namespace std;
int main()
{
    int n, i, pares = 0, impares = 0;
    cin >> n;
    int vetor[n];
    for (i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    for (i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            pares += vetor[i];
        }
        else
        {
            impares += vetor[i];
        }
    }
    if (pares > impares)
    {
        cout << "rebeldes" << endl;
    }
    else if (pares < impares)
    {
        cout << "soldados" << endl;
    }
    else
    {
        cout << "empate" << endl;
    }
}
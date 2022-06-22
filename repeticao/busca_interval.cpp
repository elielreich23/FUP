#include <iostream>
using namespace std;

//@058 L2
int main()
{
    int tamanho, lim_inf, lim_sup, x = 0, i;

    cin >> tamanho >> lim_inf >> lim_sup;
    int vet[tamanho];
    for (i = 0; i < tamanho; i++)
    {
        cin >> vet[i];
    }

    for (i = 0; i < tamanho; i++)
    {
        if ((vet[i] >= lim_inf) && (vet[i] <= lim_sup))
        {
            x++;
        }
    }
    cout << x << endl;
}
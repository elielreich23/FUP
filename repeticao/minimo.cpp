#include <iostream>

using namespace std;

int main()
{
    // int vetor, a, b, c, d, e;
    // cin >> a >> b >> c >> d >> e;
    int i, vetor[5], menor = 500;
    for (i = 0; i < 5; i++)
    {
        cin >> vetor[i];
    }

    for (i = 0; i < 5; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    cout << menor << endl;
}
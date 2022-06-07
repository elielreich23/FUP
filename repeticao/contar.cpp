#include <iostream>
using namespace std;
int main()
{
    int x, n, i, contardor = 0;
    cin >> x >> n;
    int vetor[n];
    for (i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    for (i = 0; i < n; i++)
    {
        // cout << x;
        if (x == vetor[i])
        {
            contardor++;
        }
    }
    cout << contardor << endl;
}
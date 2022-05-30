#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x;
    char operacao;
    cin >> x >> operacao;

    if (operacao == 'r')
    {
        cout << round(x);
    }
    else if (operacao == 'f')
    {
        cout << floor(x);
    }
    else if (operacao == 'c')
    {
        cout << ceil(x);
    }
    cout << endl;
}
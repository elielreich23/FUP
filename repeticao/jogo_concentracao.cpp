#include <iostream>
using namespace std;
int main()
// organisar o codigo para fazer a saida
{

    int A, B, i, aux = 0;
    cin >> A >> B;
    cout << "[";
    for (i = A; i <= B; i++)
    {
        cout << " " << i;
        cout << " " << B - aux;
        aux++;
    }
    cout << " ]" << endl;
}
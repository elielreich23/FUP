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

    // int A, B, x, y, c;
    // cin >> A >> B;
    // for (int i = 0; i < B; i++)
    // {
    //     x = A++;
    //     c = B;
    //     if (int j = c)
    //     {
    //         y = c--;
    //     }
    //     cout << x << y;
    // }

    // for (int j = B; j >= A; j--)
    // {
    //     y = j--;
    //     cout << y << "\n";
    // }

    // cout << x << "\n";
    // 1 5
    // 1 5 2 4 3 3 4 2 5 1
}
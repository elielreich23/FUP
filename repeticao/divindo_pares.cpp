#include <iostream>
using namespace std;
int main()
{
    int a, b, x = 0, i;
    // i, vetor[100];
    cin >> a >> b;
    if (b > a)
    {
        // cout << a << b;

        for (i = a; i <= b; i++)
        {
            if (i % 2 == 0 && i % 3 == 0)
            {
                x += i;
            }
        }
        cout << x << endl;
    }
    else if (b == a)
    {
        cout << b << endl;
    }
    else
    {
        cout << "invalido"
                "\n";
    }
}
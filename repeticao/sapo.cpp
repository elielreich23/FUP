#include <iostream>
using namespace std;
int main()
{
    int P, S, E, x = 0;
    cin >> P;
    cin >> S;
    cin >> E;

    cout << x << " ";
    while (!(x >= P))
    {
        x += S;
        if (x >= P)
        {
            break;
        }
        cout << x << " " << endl;

        x -= E;
        cout << x << " ";
    }
    cout << "saiu" << endl;
}
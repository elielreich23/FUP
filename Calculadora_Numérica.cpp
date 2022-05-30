#include <iostream>

using namespace std;

int main()
{
    int x, y, res;
    string operador;
    cin >> x >> y >> operador;

    if (operador == "+")
    {
        res = x + y;
        cout << res << endl;
    }
    else if (operador == "-")
    {
        res = x - y;
        cout << res << endl;
    }
    else if (operador == "*")
    {
        res = x * y;
        cout << res << endl;
    }
    else if (operador == "/" && x > 0)
    {
        res = x / y;
        cout << res << endl;
    }
}
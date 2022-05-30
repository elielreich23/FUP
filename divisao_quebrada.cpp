#include <iostream>

using namespace std;

int main()
{
    int x, y, resultado, res;
    float resultado_em_decimais;
    cin >> x;
    cin >> y;
    resultado = x / y;
    cout << resultado << endl;
    res = x % y;
    cout << res << endl;
    resultado_em_decimais = (float)x / y;
    cout << fixed;
    cout.precision(2);
    cout << resultado_em_decimais << endl;
}
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    string resposta;

    cin >> x >> y;
    // this code is not complete it remain the check for the second case
    if (x % 3 > 0 && x % 5 > 0)
    {
        resposta = 'sim';
        cout << resposta << endl;
    }
}
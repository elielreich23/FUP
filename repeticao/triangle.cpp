#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int lenght;
    char symbol;
    cout << "lenght: ";
    cin >> lenght;
    cout << "enter symbol: ";
    cin >> symbol;
    for (int i = 1; i <= lenght; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
    cout << endl
         << endl;
    for (int i = lenght; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
}
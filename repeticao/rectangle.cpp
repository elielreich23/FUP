#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int length, width;
    char symbol;
    cout << "enter the desired length :";
    cin >> length;
    cout << "enter the desired width :";
    cin >> width;
    cout << "enter the display symbol :";
    cin >> symbol;

    for (int i = 0; i < length; i++)
    {
        for (int w = 0; w < width; w++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
}
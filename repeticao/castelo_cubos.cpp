#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int x, res, i, num_int = 100;
    cin >> x;
    for (i = 0; i < num_int; i++)
    {
        if (pow(i, 2) == x)
        {
            cout << "sim" << endl;
            return 0;
        }
    }
    cout << "nao" << endl;
}
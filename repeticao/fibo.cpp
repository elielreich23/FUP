#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, i, number, soma = 0;
    cout << "Enter the number of elements: ";
    cin >> number;
    for (i = 0; i < number; ++i)
    {
        n3 = n1 + n2;
        if (n3 % 2 == 0)
            soma += n3;
        // cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    cout << soma << endl;
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x, y, som = 0;
//     cin >> x;
//     y = x;
//     int vetor[y];
//     for (int i = 0; i < y; i++)
//     {

//         som++;

//         cout << som << " ";

//          if (i == 2; i < y; (vetor[i] > vetor[i - 1]))
//          {
//            b = vetor[i] + vetor[i - 1];
//              cout << som << " ";
//          }
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, i, x, num_par, b = 0;
    cout << "Enter the number of elements: ";
    cin >> x;
    for (i = 0; i < x; i++)
    {
        n3 = n1 + n2;
        // cout << n3 << " ";
        n1 = n2;
        n2 = n3;
        if (n3 % 2 == 0)
        {
            num_par = n3;
            b = num_par + num_par;
            cout << b;
        }
    }

    return 0;
}
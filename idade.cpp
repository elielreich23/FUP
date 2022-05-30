#include <iostream>

using namespace std;

int main()
{
    int M, A, B, X, Mais_velho;
    cin >> M >> A >> B;
    X = M - (A + B);

    if (X > A && X > B)
    {
        Mais_velho = X;
        cout << Mais_velho << endl;
    }
    else if (A > X && A > B)
    {
        Mais_velho = A;
        cout << Mais_velho << endl;
    }
    else if (B > X && B > A)
    {
        Mais_velho = B;
        cout << Mais_velho << endl;
    }
}

//

// #include <iostream>

// using namespace std;

// int main()
// {
//     int M, A, B, x;
//     cin >> M >> A >> B;
//     x = M - (A + B);
//     cout << x << endl;
// }

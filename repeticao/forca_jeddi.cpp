#include <iostream>
using namespace std;
int main()

// create code to enter integers
{
    int num_elemento = 0, valor, soma_jeddi = 0, soma_sith = 0, i;
    cin >> num_elemento;
    for (i = 0; i < num_elemento / 2; i++)
    {
        cin >> valor;
        soma_jeddi += valor;
    }
    for (i = 0; i < num_elemento / 2; i++)
    {
        cin >> valor;
        soma_sith += valor;
    }
    if (soma_jeddi > soma_sith)
    {
        cout << "jeddi";
    }
    else if (soma_jeddi < soma_sith)
    {
        cout << "sith";
    }
    else
    {
        cout << "empate" << endl;
    }
}
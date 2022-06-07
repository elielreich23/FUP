/* data structure heterogenea i.e can
store data of different types
compossed of attributes,  each attribute have a nam
it's possible to access the data with the name of
the attribute

it's decleared using "
    struct pessoa{
        string nome;
        int idade;
        float saldo_em_conta;
    };
"
*/

// declaration
/*
    struct pessoa p{
        p.nome = "vitor";
        p.idade = 22;
        p.saldo_em_conta = 15.32;
    }
*/

#include <iostream>
using namespace std;
struct pessoa
{
    string nome;
    int idade;
    float saldo_em_conta;
};

int main()
{
    struct pessoa p;
    p.nome = "vitor";
    p.idade = 22;
    p.saldo_em_conta = 15.32;
    p.idade = 22;
    cout << p.idade << "\n"
         << p.nome << "\n"
         << p.saldo_em_conta << "\n";
}
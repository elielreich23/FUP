#include <iostream>
using namespace std;

struct pessoa
{
    string nome;
    int idade;
    float saldo_em_conta;
};

void imprimir_pessoa(struct pessoa pes)
{
    cout << "nome: " << pes.nome << "\n";
    cout << "idade: " << pes.idade << "\n";
    cout << "saldo_em_conta: " << pes.saldo_em_conta << "\n";
};

void f(struct pessoa pes)
{
    pes.nome = "maria";
    pes.idade = 30;
}

int main()
{
    struct pessoa p;
    p.nome = "vitor";
    p.idade = 22;
    p.saldo_em_conta = 15.32;
    p.idade = 22;
    f(p);
    cout << p.idade << "\n"
         << p.nome << "\n"
         << p.saldo_em_conta << "\n";
    imprimir_pessoa(p);
}
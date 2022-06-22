#include <iostream>
using namespace std;

struct conta
{
    string nome;
    float saldo;
};

void imprimir(struct conta c)
{
    cout << "nome" << c.nome << "saldo" << c.saldo << "\n";
}
void imprimir_listas_contas(struct conta cs)
{
    int n;
    for (int i = 0; i < n; i++)
    {
        imprimir(cs[i]);
    }
}

void f(struct conta cs[])
{
    cs[0].saldo = 0;
}

int main()
{
    struct conta contas[3];
    contas[0].nome = "victor";
    contas[0].saldo = 15.30;
    contas[1].nome = "marcio";
    contas[1].saldo = 10000;
    contas[2].nome = "louis";
    contas[2].saldo = 999;
    imprimir_listas_contas(contas, 3);

    contas[0];

    // cout << contas[0].nome << " " << contas[0].saldo << "\n";
    // cout << contas[1].nome << " " << contas[1].saldo << "\n";
    // cout << contas[2].nome << " " << contas[2].saldo << "\n";
};

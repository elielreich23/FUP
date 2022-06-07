#include <iostream>
using namespace std;

struct data
{
    int dia, mes, ano;
};

void ler_data(struct data &d)
{
    cin >> d.dia >> d.mes >> d.ano;
}

int compara_data(struct data data1, struct data data2)
{
    if (data1.ano > data2.ano)
    {
        return 1;
    }
    else if (data2.ano > data1.ano)
    {
        return -1;
    }
    else if (data1.mes > data2.mes)
    {
        return 1;
    }
    else if (data2.mes > data1.mes)
    {
        return 1;
    }
    else if (data1.dia > data2.dia)
    {
        return 1;
    }
    else if (data2.dia > data1.dia)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct data d1, d2;
    ler_data(d1);
    ler_data(d2);
    if (compara_data(d1, d2) == -1)
    {
        cout << "primeira data\n";
    }
    else if (compara_data(d1, d2) == 0)
    {
        cout << "iguais";
    }
    else
    {
        cout << "segunda data\n";
    }
}
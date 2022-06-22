#include <iostream>
using namespace std;
struct aluno
{
    string nome;
    float n1, n2, n3, media;
};
// look for the code in moodle
void ler_aluno(struct aluno &al)
{
    getline(cin, al.nome);
    cin >> al.n1 >> al.n2 >> al.n3;
}

void imprimir_alunos(struct aluno alunos[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i;
    }
}

void comptar_media(struct aluno alunos[], int n)
{
    for (int i = 0; i < n; i++)
    {
        alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3 / 3);
    }
}

void ordenar(struct aluno alunos[], int n)
{
    struct aluno aux;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (alunos[j].media < alunos[j + 1].media)
            {
                aux = alunos[j + 1];
                alunos[j + 1] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
}

int main()
{
    struct aluno alunos[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ler_aluno(alunos[i]);
    }
}
// 123:
#include <iostream>
#include <string.h>
using namespace std;

typedef struct pessoa
{
    char nome[100];
    int idade;
} t_pessoa;

int main(int argc, char *argv[])
{
    t_pessoa p;

    strcpy(p.nome, "Emanuelle");
    p.idade = 38;

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;

    return 0;
}
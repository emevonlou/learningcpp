// 123:
#include <iostream>
#include <string.h>
using namespace std;

typedef struct pessoa
{
    char nome[100];
    int idade;
    int ano;
    char cpf[20];

} t_pessoa;

int main(int argc, char *argv[])
{
    t_pessoa p;

    strcpy(p.nome, "Emanuelle");
    p.idade = 38;

    cout << "Digite o ano do seu nasc: " << endl;
    cin >> p.ano;
    cout << "Digite seu CPF: " << endl;
    cin >> p.cpf;
    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    cout << "Seu CPF eh: " << p.cpf << endl;
    cout << "O ano do seu nascimento eh: " << p.ano << endl;

    return 0;
}
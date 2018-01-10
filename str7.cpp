// 128:
#include <iostream>
#include <string.h>
using namespace std;

typedef struct pessoa
{
    char nome[100];
    int ano;
    int idade;
    char cpf[20];

} t_pessoa;

int main(int argc, char *argv[])
{
    t_pessoa p;


    cout << "Digite seu nome: " << endl;
    cin >> p.nome;
    cout << "Digite o ano do seu nasc: " << endl;
    cin >> p.ano;
    p.idade = 2018 - p.ano;
    cout << "Digite seu CPF: " << endl;
    cin >> p.cpf;
    cout << "Seu CPF eh: " << p.cpf << endl;
    cout << "Sua idade eh: " << p.idade << endl;

    return 0;
}
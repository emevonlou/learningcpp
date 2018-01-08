// 124:
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
    t_pessoa p[3];

    strcpy(p[0].nome, "Emanuelle"); // acessa a struct atraves do ponto
    p[0].idade = 38;

    strcpy(p[1].nome, "Joaquim");
    p[1].idade = 8;

    strcpy(p[2].nome, "Fifi");
    p[2].idade = 6;

    cout << "Nome 1: " << p[0].nome << endl;
    cout << "Idade 1: " << p[0].idade << endl;
    cout << "Nome 2: " << p[1].nome << endl;
    cout << "Idade 2: " << p[1].idade << endl;
    cout << "Nome 3: " << p[2].nome << endl;
    cout << "Idade 3: " << p[2].idade << endl;

    return 0;
}
// 125: Acessando structs com ponteiro
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
    t_pessoa* pessoa;
    t_pessoa* ppessoa;

    ppessoa = pessoa;
    ppessoa->26;

    cout << ppessoa->idade << endl;

    return 0;
}
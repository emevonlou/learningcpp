// 80: structs com ponteiros!
#include <iostream>
#include <string.h> // strcpy()
using namespace std;

typedef struct pessoa // Definindo um nome para 'struct pessoa' com typedef.
{
    char nome[100];
    int idade;
    float peso;
} tipo_pessoa;

int main(int argc, char *argv[])
{
    tipo_pessoa p;
    tipo_pessoa *pp;

    pp = &p;

    strcpy(pp->nome, "Emanuelle");
    pp->idade = 38;
    pp->peso = 44.3;

    cout << "Nome: " << pp->nome << endl; // Para acessar a struct com um ponteiro vc deve utilizar a seta '->' ou (*pp).
    cout << "Idade: " << pp->idade << endl;
    cout << "Peso: " << pp->peso << endl;

    return 0;
}
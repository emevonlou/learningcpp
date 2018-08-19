// 79: structs: Tem por objetivo agrupar os dados.
#include <iostream>
#include <string.h> // strcpy()
using namespace std;

typedef struct pessoa // Definindo um nome para 'struct pessoa' com typedef.
{
    char nome[100];
    int idade;
    float peso;
} tipo_pessoa; // Ao invés de digitar sempre 'struct pessoa', digita 'tipo_pessoa'.

int main(int argc, char *argv[])
{
    tipo_pessoa p;

    strcpy(p.nome, "Emanuelle");
    p.idade = 38;
    p.peso = 44.3;

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    cout << "Peso: " << p.peso << endl;

    return 0;
}
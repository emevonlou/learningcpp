//structs: Tem por objetivo agrupar os dados.
#include <iostream>
#include <string.h> // strcpy()
using namespace std;

struct pessoa // Agrupando os dados
{
    // Toda struct é publica
    char nome[100]; 
    int idade;
    float peso;
};

int main(int argc, char *argv[])
{
    struct pessoa p;

    strcpy(p.nome, "Emanuelle");
    p.idade = 38;
    p.peso = 44.3;

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    cout << "Peso: " << p.peso << endl;
    
    return 0;
}
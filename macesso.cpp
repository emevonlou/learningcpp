// Modificadores de acesso e Funções friends
#include <iostream>
#include <string.h>
using namespace std;

class Linguagem
{
public:
    char nome[100];
};

int main(int argc, char *argv[])
{
    Linguagem l;

    strcpy(l.nome, "c++");

    cout << "Nome: " << l.nome << endl;

    return 0;
}
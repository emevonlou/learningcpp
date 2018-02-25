// 177: Cosntrutor de cópias(Também chamada de cópia superficial)!
#include <iostream>
#include <string.h>
using namespace std;

class Estudante
{
  public:
    int idade;
    char *nome;

    // Cosntrutor inicializando a idade com zero.
    Estudante(const char *nome)
    {
        idade = 0;
        int tam = strlen(nome) + 1;
        this->nome = new char[tam]; // Alocando memória fora da pilha.
        strcpy(this->nome, nome);  // Copiando o nome para this->nome
    }
};

int main(int argc, char *argv[])
{
    //Estudante e;

    //cout << "Idade: " << e.idade << endl;

    return 0;
}
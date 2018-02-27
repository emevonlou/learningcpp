// 178: Herança
#include <iostream>
#include <string.h>
using namespace std;

class Animal // classe base.
{
  protected:    // Atributos protegidos.
    char *nome; // Nome do animal
    bool voa;   // Booleano pra verificar se o animal inserido voa ou n.
    int patas;   // quantidade de patas.
  public:
    Animal(const char *nome) // Meu construtor.
    {
        this->nome = new char[strlen(nome)+ 1];   // Alocando.
        strcpy(this->nome, nome);
        voa = false;
        patas = 0;
    }
};

class Cachorro : public Animal
{
};

int main(int argc, char *argv[])
{

    return 0;
}
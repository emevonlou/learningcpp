// 178: Herança
#include <iostream>
#include <string.h>
using namespace std;

class Animal // classe base.
{
  protected:    // Atributos protegidos.
    char *nome; // Nome do animal
    bool voa;   // Booleano pra verificar se o animal inserido voa ou n.

  public:
    Animal(const char *nome) // Meu construtor.
    {
        strcpy(this->nome, nome);
    }
};

class Cachorro : public Animal
{
};

int main(int argc, char *argv[])
{

    return 0;
}
// 178: Herança
#include <iostream>
#include <string.h>
using namespace std;

class Animal   // classe base.
{
protected:  // Atributos protegidos.
    char* nome;  // Nome do animal

public:
    Animal(const char* nome)   // Meu construtor.
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
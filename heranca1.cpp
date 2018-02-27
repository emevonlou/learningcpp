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
        this->nome = new char[strlen(nome) + 1]; // Alocando.
        strcpy(this->nome, nome);
        voa = false;

    }
    ~Animal() // Destrutor.
    {
        delete[] nome;
    }

    // Funções para obter algo.
    const char* getNome()
    {
        return nome;
    }
};

class Cachorro : public Animal   // Classe Cachorro herdando da classe Animal.
{
protected:
    int idade;

public: 
    // A classe Cachorro não precisa manipular o nome
    // Mas chama o construtor Animal
    Cachorro(const char* nome) : Animal(nome)
    {
        idade = 0;
    }
    int getIdade()
    {
        return idade;
    }
    void setIdade()
    {
        this->idade = idade;
    }
};

int main(int argc, char *argv[])
{

    return 0;
}
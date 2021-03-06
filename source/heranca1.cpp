// 178: Herança.
#include <iostream>
#include <string.h>
using namespace std;

class Animal // classe base.
{
  protected:    // Atributos protegidos.
    char *nome; // Nome do animal.

  public:
    Animal(const char *nome) // Meu construtor.
    {
        cout << "construindo Animal... " << endl;
        this->nome = new char[strlen(nome) + 1]; // Alocando.
        strcpy(this->nome, nome);
    }
    ~Animal() // Destrutor.
    {
        delete[] nome;
    }

    // Funções para obter algo.
    const char *getNome()
    {
        return nome;
    }
};

class Cachorro : public Animal // Classe Cachorro herdando da classe Animal.
{
  protected:
    int idade;

  public:
    // A classe Cachorro não precisa manipular o nome.
    // Mas chama o construtor Animal.
    Cachorro(const char *nome) : Animal(nome)
    {
        cout << "Construindo cachorro..." << endl;
        idade = 0;
    }
    int getIdade()
    {
        return idade;
    }
    void setIdade(int idade)
    {
        this->idade = idade;
    }
};

int main(int argc, char *argv[])
{
    Cachorro c("Nanook");
    c.setIdade(1);

    cout << "Nome: " << c.getNome() << endl;
    cout << "Idade: " << c.getIdade() << endl;
    return 0;
}
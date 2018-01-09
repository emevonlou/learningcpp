// 127:
#include <iostream>
using namespace std;

struct Pessoa
{
    int idade;

    Pessoa(int idade); // Protótipo do Construtor.

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    int getIdade()
    {
        return this->idade;
    }
};

Pessoa::Pessoa(int idade) // Implementação do Construtor.
{
    this->idade = idade;
}


int main(int argc, char *argv[])
{
    Pessoa p(20);

    cout << p.getIdade() << endl;

    return 0;
}
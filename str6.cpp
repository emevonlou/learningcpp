// 127:
#include <iostream>
using namespace std;

struct Pessoa
{
    int idade;

    Pessoa(int idade); // prototipo do construtor

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    int getIdade()
    {
        return this->idade;
    }
};

Pessoa::Pessoa(int idade) // implementacao do construtor
{
    this->idade = idade;
}


int main(int argc, char *argv[])
{
    Pessoa p(20);

    cout << p.getIdade() << endl;

    return 0;
}
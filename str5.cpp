// 126:
#include <iostream>
using namespace std;

struct Pessoa
{
    int idade;
    int numero_sorte;

    Pessoa(int idade) // primeiro construtor
    {
        this->idade = idade;
    }

    Pessoa(int idade, int num_sorte) // segundo construtor
    {
        this->idade = idade;
        this->numero_sorte = num_sorte;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    int getIdade()
    {
        return this->idade;
    }
};


int main(int argc, char *argv[])
{
    Pessoa p(20);
    Pessoa p2(20, 10);

    cout << p.getIdade() << endl;

    return 0;
}
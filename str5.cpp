// 126:
#include <iostream>
using namespace std;

struct Pessoa
{
    int idade;

    Pessoa(int idade)
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

    cout << p.getIdade() << endl;

    return 0;
}
// Construtores e destrutores.
#include <iostream>
using namespace std;

class Pessoa
{
    public:
        char nome[100];
        int idade;
};

int main(int argc, char *argv[])
{
    Pessoa p = {"João", 30};

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    
    return 0;
}

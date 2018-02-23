// Construtores e destrutores.
#include <iostream>
using namespace std;

class Ficha
{
    public:
        char nome[100];
        int idade;
};

int main(int argc, char *argv[])
{
    Ficha p = {"Emanuelle", 38};

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;

    return 0;
}

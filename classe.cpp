// Programando com classe(agrupamento de dados com classe)
#include <iostream>
using namespace std;

class Pessoa   // nome da classe com letra maiúscula
{
public:    // modificador de acesso
    int idade;
    int peso;
};

int main(int argc, char *argv[])
{
    Pessoa pessoa;

    pessoa.idade = 28;  // Acesso aos membros do objeto
    pessoa.peso = 75.56;

    cout << "Idade: " << pessoa.idade << endl;

 return 0;
}
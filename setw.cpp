// make 153:
#include <iostream>
#include <iomanip> // setw()
using namespace std;

class Pessoa
{
public:
    string nome;
    int idade;

    // construtor
    // Onde o usuario ira passar o nome e a idade dessa pessoa.
    Pessoa(const string& nome, const int& idade) 
    {
        this->nome.assign(nome);
        this->idade = idade;
    }
};

int main(int argc, char *argv[])
{
    Pessoa p1("Maria da silva", 20);
    Pessoa p2("Pedro souza", 34);
    Pessoa p3("Felipe da silva", 28);

    // setw-> vou ter um campo de 20 caracteres onde vou armazenar um valor.
    cout << setw(20) << "Nome da pessoa: " << setw(10) << "Idade" << endl;
    cout << setw(20) << p1.nome << setw(10) << p1.idade << endl;
    cout << setw(20) << p2.nome << setw(10) << p2.idade << endl;
    cout << setw(20) << p3.nome << setw(10) << p3.idade << endl;

    

    return 0;
}


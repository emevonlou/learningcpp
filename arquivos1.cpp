// Gravando objetos em Arquivos.
#include <iostream>
#include <fstream> // ofstream e ifstream(output e input)
using namespace std;

class pessoa
{
private:
    string nome;
    int idade;
public:
    string& getNome()
    {
        return nome;
    }
    int geIdade()
    {
        return idade;
    }
    void setNome(string& nome)
    {
        this->nome = nome;
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
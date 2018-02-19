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

char menu()
{
    char resp;
    cout << "Digite 1 para inserir pessoas:\n ";
    cout << "Digite 2 para listar pessoas:\n ";
    cout << "Digite 0 para sair:\n ";
    cin >> resp;
    return resp;
}

int main(int argc, char *argv[])
{
    char resp;

    while(true)
    {
        resp = menu();
    }

    return 0;
}
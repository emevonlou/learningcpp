// Construtores e destrutores.
#include <iostream>
#include <string.h>
using namespace std;

class Ficha
{
    protected:
        char nome[100];
        int idade;
    public:
    // Inicializando o construtor para acessar os dados protegidos.
        Ficha(const char* nome,int idade)  
        {
            strcpy(this->nome, nome);
            this->idade = idade;
        }
        char* getNome()
        {
            return nome;
        }
        int getIdade()
        {
            return idade;
        }
};

int main(int argc, char *argv[])
{
    Ficha p("Emanuelle", 38);

    cout << "Nome: " << p.getNome() << endl;
    cout << "Idade: " << p.getIdade() << endl;

    return 0;
}

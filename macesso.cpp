// Modificadores de acesso e Funções friends
#include <iostream>
#include <string.h>
using namespace std;

class Linguagem
{
private:
  // Os membros publicos formam a interface da classe.
    char nome[100];  
public: 
    void mostrarNome()
    {
        cout << "Nome: " << nome << endl;
    }

    void setNome(char nome[])
    {
        strcpy(this->nome, nome);
    }
};

int main(int argc, char *argv[])
{
    Linguagem l;

    l.mostrarNome();
    return 0;
}
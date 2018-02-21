// Modificadores de acesso e Funções friends
#include <iostream>
#include <string.h>
using namespace std;

class Linguagem
{
protected:
  // Os membros publicos formam a interface da classe.
    char nome[100];  
public: 
    char * getNome()
    {
        return nome;
    }
};

int main(int argc, char *argv[])
{
    Linguagem l;

    strcpy(l.getNome(), "c++");

    cout << "Nome: " << l.getNome() << endl;

    return 0;
}
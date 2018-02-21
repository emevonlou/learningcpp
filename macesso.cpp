// 174: Modificadores de acesso e Funções friends
#include <iostream>
#include <string.h>
using namespace std;

class Linguagem
{
protected:
  // Os membros publicos formam a interface da classe.
    char nome[100];  
public: 
    void mostrarNome()
    {
        cout << "Nome: " << nome << endl;
    }

    void setNome(const char* nome)
    {
        strcpy(this->nome, nome);
    }
};

int main(int argc, char *argv[])
{
    Linguagem l;

    l.setNome("c++");
    l.mostrarNome();
    return 0;
}
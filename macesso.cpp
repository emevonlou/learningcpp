// 174: Modificadores de acesso e Funções friends
#include <iostream>
#include <string.h>
using namespace std;

class Linguagem
{
  protected:
    // protected: A classe fica responsável pela própria situação interna.
    // Os membros publicos formam a interface da classe.
    char nome[100];

  private:
    void mostrarNome()
    {
        cout << "Nome: " << nome << endl;
    }

  public:
    void setNome(const char *nome)
    {   // A função set provavelmente irá ajustar o valor de alguma coisa.
        // A set é chamada Função de ajuste.
        strcpy(this->nome, nome);
    }
    void mostrarNome2()
    {
        mostrarNome();
    }
};

int main(int argc, char *argv[])
{
    Linguagem l;

    l.setNome("c++");
    l.mostrarNome2();
    return 0;
}
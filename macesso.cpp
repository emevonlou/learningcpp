// 174: Modificadores de acesso e Funções friends
/*
    Função Friend:
    Não é uma função membro e você quer que ela 
    tenha acesso à membros protegidos de uma classe.
*/
#include <iostream>
#include <string.h>
using namespace std;

class Linguagem
{
    friend void ClasseAmiga(Linguagem*);  // Função Friend.
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
        // Enquanto a função get é pra obter algum retorno/valor.
        strcpy(this->nome, nome);
    }
    void mostrarNome2()
    {
        mostrarNome();
    }
};

class Linguagemamiga
{
    friend class Linguagem;
};

void ClasseAmiga(Linguagem* l)
{
    cout << "Classe amiga diz: " << l->nome << endl;
}
int main(int argc, char *argv[])
{
    Linguagem l;

    l.setNome("c++");
    // l.mostrarNome2();
    ClasseAmiga(&l);
    return 0;
}
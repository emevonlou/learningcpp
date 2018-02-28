// 179: Funções virtuais!
#include <iostream>
using namespace std;

class ClasseMae
{
  public:
    void mostrarMensagem()
    {
        cout << "Ola, sou a classe mae!" << endl;
    }
};

class ClasseFilha : public ClasseMae // Herança
{
  public:
    void mostrarMensagem()
    {
        cout << "Ola, sou a classe Filha!" << endl;
    }
};

void foo(ClasseMae* p)   // Função que recebe um ponteiro tipo ClasseMae
{
    p->mostrarMensagem();  // Chamar mostrarMensagem() da classemae.
}

int main(int argc, char *argv[])
{
    ClasseMae mae; // Objeto da classeMae.
    ClasseFilha filha; // Objeto da ClasseFilha.

    mae.mostrarMensagem();
    filha.mostrarMensagem();
    return 0;
}
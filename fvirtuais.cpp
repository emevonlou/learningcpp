// 179: Funções virtuais!
// Lembrando: Consrutores não podem ser declarados virtuais.
// Os destrutores podem ser declarados como virtuais, desde que
// A classe tenha muitos dados membros.
#include <iostream>
using namespace std;

class ClasseMae
{
  public:
    virtual void mostrarMensagem()
    {   
        cout << "Ola, sou a classe mae!" << endl;
    }
};

class ClasseFilha : public ClasseMae // Herança
{
  public:
    virtual void mostrarMensagem()
    {
        cout << "Ola, sou a classe Filha!" << endl;
    }
};

void foo(ClasseMae *p) // Função que recebe um ponteiro tipo ClasseMae
{
    p->mostrarMensagem(); // Chamar mostrarMensagem() da classemae.
}

int main(int argc, char *argv[])
{
    ClasseMae mae;     // Objeto da classeMae.
    ClasseFilha filha; // Objeto da ClasseFilha.

    // mae.mostrarMensagem();
    // filha.mostrarMensagem();

    foo(&mae);   // Chamando a função foo(), passando o endereço da variável mae.
    foo(&filha); // Chamando a função foo(), passando o endereço da variável filha.
    return 0;
}
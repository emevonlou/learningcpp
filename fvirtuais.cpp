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

int main(int argc, char *argv[])
{
    ClasseMae mae;      // Objeto.
    ClasseFilha filha;
    return 0;
}
// 177: Cosntrutor de cópias!
#include <iostream>
using namespace std;

class Estudante
{
  public:
    int idade;

    // Cosntrutor inicializando a idade com zero.
    Estudante()
    {
        idade = 0;
    }
};

int main(int argc, char *argv[])
{
    Estudante e;

    cout << "Idade: " << e.idade << endl;

    return 0;
}
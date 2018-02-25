// Sobrecarregando construtores.
#include <iostream>
using namespace std;

class Carro
{
  public:
    int ano;
    // Primeiro construtor: que não vai receber nada, apenas inicializar.
    Carro()
    {
        ano = 0; // inicializa pro ano 0
    }

    // Segundo construtor: Vai receber o ano
    Carro(int ano)
    {
        // Atribui ao ano o ano deste objeto aqui.
        this->ano = ano;
    }
};

int main(int argc, char *argv[])
{

    return 0;
}
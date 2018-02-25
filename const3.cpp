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
    Carro carro;        // Objeto da classe Carro()
    Carro carro2(2014); // Passando o ano do carro

    cout << "Ano do Carro: " << carro.ano << endl;
    cout << "Ano do carro2: " << carro2.ano << endl;

    return 0;
}
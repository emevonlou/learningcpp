// Sobrecarregando construtores.
#include <iostream>
using namespace std;

class Carro
{
  public:
    int ano;
    double preco;
    // Primeiro construtor: que não vai receber nada, apenas inicializar.
    Carro()
    {
        ano = 0;     // inicializa pro ano 0
        preco = 0.0; // Inicializando o preço
    }

    // Segundo construtor: Vai receber o ano
    Carro(int ano)
    {
        // Atribui ao ano o ano deste objeto aqui.
        this->ano = ano;
    }

    Carro(int ano, double preco)
    {
        this->ano = ano;
        this->preco = preco;
    }
};

int main(int argc, char *argv[])
{
    Carro carro;        // Objeto da classe Carro()- primeiro construtor.
    Carro carro2(2014); // Passando o ano do carro- Segundo construtor.
    Carro carro3(2014, 200000);
    cout << "Ano do Carro: " << carro.ano << endl;
    cout << "Ano do carro2: " << carro2.ano << endl;
    cout << "Preco do carro: " << carro.preco << endl;
    cout << "Preco do carro2: " << carro2.preco << endl;
    cout << "Ano do carro3: " << carro3.ano << endl;
    cout << "preco do carro3: " << carro.preco << endl;

    return 0;
}
// 97: Arquivos de cabeçalho.
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Carro
{
  private:
    string marca;
    int ano;

  public:
    void setMarca(string marca) // Essa marca é uma variável que veio como parametro.
    {
        this->marca = marca; // Essa marca é um atributo da classe.
        // A marca da classe vai receber a marca que chegou como parametro.
    }
    string getMarca()
    {
        return marca;
    }
    void setAno(int ano)
    {
        if (ano > 1990)
            this->ano = ano; // O ano da classe recebe o ano;
        else
            this->ano = 1990; // caso contrário, o ano recebe 1990;
    }
    int getAno()
    {
        return ano;
    }
};

int main(int argc, char *argv[])
{

    Carro c1;
    c1.setMarca("Fiat"); // Passando 'Fiat' atraves do metodo setMarca.
    c1.setAno(2017);

    Carro c2;
    c2.setMarca("Ferrari");
    c2.setAno(2015);

    cout << "Marca do primeiro carro: " << c1.getMarca() << endl; // me retorne a marca.
    cout << "Ano do primeiro carro: " << c1.getAno() << endl;
    cout << "Marca do segundo carro: " << c2.getMarca() << endl;
    cout << "Ano do segundo carro: " << c2.getAno() << endl;

    return 0;
}
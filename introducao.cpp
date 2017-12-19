#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Carro
{   
    private:  // protegendo os atributos com private
        string marca;
        int ano;
    public:
       void setMarca(string x)  
       { // Método com uma função que recebe a string como parâmetro
           marca = x;  // mudando a marca pra x
       }
       string getMarca()
       {
           return marca; // retornando a marca pra ela ser acessada pelo objeto e ser impressa
       }
       void setAno(int y)
       {
           if(y > 1990) // se y for maior que 1990 o ano recebe y
               ano = y;
           else // se o ano for menor que 1990, vou falaer que o ano é 1990
               ano = 1990; 
       }
       int getAno()
       {
           return ano;
       }
};

int main(int argc, char *argv[])
{

    Carro c1;
    c1.setMarca("Fiat"); // Passando 'Fiat' atraves do metodo setMarca
    c1.setAno(2017);

    Carro c2;
    c2.setMarca("Ferrari");
    c2.setAno(2015);
    
    cout << "Marca do primeiro carro: " << c1.getMarca() << endl; // me retorne a marca
    cout << "Ano do primeiro carro: " << c1.getAno() << endl;
    cout << "Marca do segundo carro: " << c2.getMarca() << endl;
    cout << "Ano do segundo carro: " << c2.getAno() << endl;

    return 0;
}
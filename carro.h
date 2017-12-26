#ifndef CARRO_H
#define CARRO_H

#include <string>
using namespace std;

/*
    O construtor é um método que chama o proprio nome da classe,
     constroe, altera e personaliza o objeto.
*/

class Carro
{
public:
    Carro(); 
    void setMarca(string marca);
    string getMarca();
    void setAno(int ano);
    int getAno();
  
private:
    string marca;
    int ano;
    
};

#endif
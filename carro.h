#ifndef CARRO_H
#define CARRO_H

#include <string>
using namespace std;

class Carro
{
public:
    void setMarca(string marca);
    string getMarca();
    void setAno(int ano);
    int getAno();
  
private:
    string marca;
    int ano;
    
};

#endif
#include "carro.h"

#include <string>
using namespace std;

void Carro::setMarca(string marca)
{
this->marca = marca;
}

string Carro::getMarca()
{
    return marca;
}

void Carro::setAno(int ano)
{
    if(ano > 1990)
        this->ano = ano;
    else
        this->ano = 1990;
}

int Carro::getAno()
{
    return ano;
}
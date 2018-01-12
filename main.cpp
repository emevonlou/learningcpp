// 98: carro.cpp carro.h
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

#include "carro.h"

int main(int argc, char *argv[])
{
    Carro c1;
    c1.setMarca("Ferrari");
    c1.setAno(2017);

    Carro c2("Fiat", 2017);
    c2.setAno(2018); // Unica maneira de alterar.

    cout << c1.getMarca() << endl;
    cout << c1.getAno() << endl;
    cout << c2.getMarca() << endl;
    cout << c2.getAno() << endl;
    cout << c1.pneus << endl;
    cout << c2.pneus << endl;

    c1.pneus = 5; // Atributo static pertence a classe.

    cout << c1.pneus << endl;
    cout << c2.pneus << endl;

    return 0;
}

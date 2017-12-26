// carro.cpp carro.h
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

    cout << c2.getMarca() << endl;
    cout << c2.getAno() << endl;

    return 0;
}

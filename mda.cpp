/*
    Parametros opcionais
    Se nenhum parametro não foi passado
    vocẽ pode ter/passar um valor default
*/ 
#include <iostream>
using namespace std;

int quad(int num = 1) // valor default = 1
{
    return num * num;
}

int main(int argc, char *argv[])
{
    int num = 10;

    cout << "Quadrado: " << quad() << endl; // func sem parametros

    return 0;
}
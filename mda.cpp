/*
    Parametros opcionais
    Se nenhum parametro não foi passado
    vocẽ pode ter/passar um valor default
*/ 
#include <iostream>
using namespace std;

int quad(int num) // valor default = 1
{
    return num * num;
}

int main(int argc, char *argv[])
{
    int num = 10;

    cout << "Quadrado: " << quad(num) << endl; // func sem parametros

    return 0;
}
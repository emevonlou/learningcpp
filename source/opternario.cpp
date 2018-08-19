/*
     182: Operação ternária: operação com trẽs operandos.
     Operador Ternário ?:
     <condição> ? <operador1> : <operador2>;
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int num = 10;
    /*
    if(num > 10)
        cout << "Numero maior que 10." << endl;
    else
        cout << "Numero menor ou igual a dez." << endl;
    */

    // Com operador ternário:
    num > 10 ? cout << "Maior" : cout << "Menor ou igual";
    return 0;
}
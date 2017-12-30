// 77:
#include <iostream> // Traz um conjunto de instruções chamados de manipuladores.
#include <stdlib.h> // system("pause")
#include <iomanip>  // setw()
using namespace std;

int main(int argc, char *argv[])
{
    //obj cin
    //obj cout

    cout << "Estudando a entrada e saida de dados: " << endl; //OBJETO DE SAÍDA(cout)
    cout << setw(10) << 1 << endl;                            // setw() Estabelece tamanho de um determinado campo.
    cout << setw(10) << 2 << endl;
    cout << setw(10) << 3 << endl;
    cout << setw(10) << 4 << endl;

    system("pause");
    return 0;
}
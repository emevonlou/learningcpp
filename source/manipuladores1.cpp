// 76:
#include <iostream> // Traz um conjunto de instruções chamados de manipuladores.
#include <stdlib.h> // system("pause").
#include <iomanip>  // setw().
using namespace std;

int main(int argc, char *argv[])
{
    // obj cin.
    // obj cout.

    cout << "Estudando a entrada e saida de dados: " << endl; // OBJETO DE SAÍDA(cout).
    cout << setw(1000) << 19 + 40 << endl;                    // setw() Estabelece tamanho de um determinado campo.

    system("pause");
}
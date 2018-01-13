// 34:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int *parray = new int[10]; // Aloca memoria.

    cout << "Digite um numero: ";
    cin >> *(parray);
    cout << "Voce digitou: " << *(parray) << endl;

    delete[] parray; // Desaloca memoria.

    parray = NULL; // Zerando o ponteiro.

    return 0;
}
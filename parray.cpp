#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int* parray = new int[10]; // aloca memoria

    cout << "Digite um numero: ";
    cin >> *(parray);
    cout << "Voce digitou: " << *(parray) << endl;

    delete[] parray; // desaloca memoria

    parray = NULL; // zerando o ponteiro

    return 0;
}
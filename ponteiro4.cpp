#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int* vet = new int[10];
    int aux[4];

    cout << "Digite um numero: ";
    cin >> *(aux);
    cout << "Voce digitou: " << aux[0] << endl;

    cout << "Digite outro numero: ";
    cin >> *(aux + 1);
    cout << "Voce digitou: " << aux[1] << endl;

    return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char nome[100], sobrenome[100];

    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Digite seu sobrenome: " << endl;
    cin >> sobrenome;

    strcat(nome, sobrenome);
    cout << "Seu nome eh: " << nome << endl;

    return 0;
}
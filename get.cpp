#include <iostream>
#define MAX 100
using namespace std;

int main(int argc, char *argv[])
{
    char nome[MAX];

    cout << "Digite o seu nome: ";
    // cin >> nome;
    cin.get(nome,MAX);  
    cout << "Oi" << nome << endl;

    return 0;
}
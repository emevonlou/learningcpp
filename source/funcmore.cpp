// 31: Função strpy() da biblioteca <cstring>
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
    char p1[20], p2[20], aux[20];

    cout << "Digite seu nome: ";
    cin.getline(p1, 20);
    cout << "Digite seu sobrenome: ";
    cin.getline(p2, 20);
    strcpy(aux, p1);
    strcpy(p1, p2);
    strcpy(p2, aux);

    cout << "\nSobrenome: " << p1 << "\nNome: " << p2 << endl;
    cout << p1 << "-" << p2 << ", muito obrigada por acessar nosso sistema!!!" << endl;

    system("pause");
}
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[])
{
    char c = '2';

    if(isalpha(c))
        cout << "Alfabetico!" << endl;
    else
        cout << "Nao alfabetico." << endl;
    if(isdigit(c))
        cout << "Digito!" << endl;
    else
        cout << "Nao eh digito." << endl;
    if(isupper(c))
        cout << "Maiuscula!" << endl;
    else
        cout << "Minuscula." << endl;
    if(islower(c))
        cout << "Minuscula!" << endl;
    else
        cout << "Maiuscula." << endl;
    
    char nome[] = "Emanuelle";
    char nome2[] = "emanuelle";
    char em[10];
    cout << "Tamanho: " << strlen(nome) << endl;

    if(strcmp(nome, nome2) == 0)
        cout << "Strings Iguais.\n";
    else
        cout << "Strings Diferentes." << endl;

    strcpy(em, nome);
        cout << "Copiando de uma string pra outra:" << em << endl;
        
    return 0;
}
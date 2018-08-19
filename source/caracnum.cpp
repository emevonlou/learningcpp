// 3: Função isalpha() retorna 'true' se o caractere for alfabetico.
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    char nome[] = "1Emanuelle";

    if (isalpha(nome[0]))
    {
        cout << "Numero" << endl;
    }
    else
    {
        /*
            Você pode adicionar vários operadores de inserção após o cout.
            cout << "Este" << "é" << "incrível!";
        */
        cout << "Letra" << endl;
    }
    return 0;
}
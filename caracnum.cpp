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
        cout << "Letra" << endl;
    }
    return 0;
}
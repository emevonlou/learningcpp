#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    char nome[] = "Emanuelle";

    if(isalpha(nome[0]))
    {
        cout << "caractere alfabetico." << endl;
    }
    else
    {
        cout << "caracter numerico." << endl;
    }
    return 0;
}
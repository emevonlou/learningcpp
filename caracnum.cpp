// função isalpha retorna true se o caractere for alfabetico
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    char nome[] = "1Emanuelle";

    if(isalpha(nome[0]))
    {
        cout << "numero" << endl;
    }
    else
    {
        cout << "letra" << endl;
    }
    return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    char nome[] = "Emanuelle";

    if(isalpha(nome[0]))
    {
        cout << "caractere numerico." << endl;
    }
    return 0;
}
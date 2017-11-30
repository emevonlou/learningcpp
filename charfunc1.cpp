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

    return 0;
}
#include <iostream>
#include <cstring> //Biblioteca da função strlen()
#include <cstdlib>
using namespace std;

int main()
{
    char frase[60];
    
    cout << "Digite uma frase: " << endl;
    cin.getline(frase, 60);
    cout << endl << "Frase:\t" << strlen(frase) << " caracteres!" << endl;
    cout << frase << endl;

    system("pause");
}
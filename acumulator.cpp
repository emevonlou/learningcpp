/*
    Nome da função: main
    Não tem parâmetros, não retorna valor.
    objetivo: declarar uma variável de tipo
    compativel com o valor que recebeu.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
	int num;
	int soma;

    for(i = 1; i <= 7; i++)
    {
        cout << "Enter " << i << " number: ";
        cin >> i;
        soma += num;
    }
    cout << "\n Soma: " << soma << endl;
    cout << "\n\n";
    system("pause");

	return 0;
}
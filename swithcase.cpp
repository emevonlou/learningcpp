// 11: if else (se senão)
// switch case

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x;
	cout << "Digite um valor inteiro: " << endl;
	cin >> x;
	if (x == 7)
	{
		cout << "Você digitou o número 7.";
	}
	else
	{
		cout << "Você não digitou o número 7.";
	}
	cout << endl;
	system("pause");

	// Estrutura realizada com switch case

	cout << "-----------------------------" << endl
		 << endl;

	switch (x)
	{
	case 7:
		cout << "você digitou o 7.";
		break;
	default:
		cout << "Você não digitou o número 7.";
		break;
	}

	cout << endl;
	system("pause");
}
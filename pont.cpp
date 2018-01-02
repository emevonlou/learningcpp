// 93: Pra um amigo que me fez pensar sobre caracteres.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char x = 's';
	char y = 'n';

	cout << "Ola Amanda!" << endl;
	cout << "Voce esta bem?(s/n)" << endl;
	cin >> x;
	if (x)
	{
		cout << "Que bom, fico feliz!" << endl;
	}
	else if (y)
	{
		cout << "O que aconteceu?" << endl;
	}

	return 0;
}

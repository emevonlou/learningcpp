/*
	classe string
	Fun��es da classe string: size()
*/
#include <iostream>
#include <string> // classe string
using namespace std;

int main(int argc, char *argv[])
{
	string nome1 = "Emanuelle Von Lou";
	cout << "Primeira string: " << nome1 << endl;
	cout << "Tamanho da string: " << nome1.size() << endl;
	cout << "primeiro caractere da string: " << nome[0] << endl;

	string nome("Joaquim Vincent"); // Passando pro construtor
	cout << "Segunda string: " << nome << endl;
	cout << "Tamanho da segunda string: " << nome.size() << endl;

	return 0;
}

/*
	classe string
	Funções da classe string: size()
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

	nome1.clear(); // limpa a string nome1

	cout << "Tamanho da string depois do .clear(): " << nome.size() << endl;
	// o tamanho da string será zero

	// verificando se a string está vazia com empty
	if (nome.empty())
		cout << "String vazia." << endl;
	else
		cout << "String nao vazia!" << endl;

	return 0;
}

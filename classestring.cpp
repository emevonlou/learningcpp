/*
106:
	Classe string.
	Funcoes da classe string: size()
*/
#include <iostream>
#include <string> // Classe string.
using namespace std;

int main(int argc, char *argv[])
{
	string nome1 = "Emanuelle Von Lou";
	cout << "Primeira string: " << nome1 << endl;
	cout << "Tamanho da string: " << nome1.size() << endl;
	cout << "primeiro caractere da string: " << nome1[0] << endl;

	// Adicionando strings com .append
	nome1.append("Costa");

	string nome("Joaquim Vincent"); // Passando pro construtor.
	// inserindo string com .insert()
	nome.insert(nome.size(), "Frota");

	cout << "Segunda string: " << nome << endl;
	cout << "Tamanho da segunda string: " << nome.size() << endl;

	nome1.clear(); // Limpa a string nome1.

	cout << "Tamanho da string depois do .clear(): " << nome.size() << endl;
	// O tamanho da string sera zero.

	// Verificando se a string esta vazia com empty.
	if (nome1.empty())
		cout << "String vazia." << endl;
	else
		cout << "String nao vazia!" << endl;
	// Acessando o segundo caractere com .at()
	cout << "Acessando o segundo caractere: " << nome.at(1) << endl;

	// Adicionando strings.
	nome.push_back('F');
	cout << "novo nome: " << nome << endl;

	return 0;
}

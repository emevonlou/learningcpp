/*
	Sobrecarregando o construtor
	� possivel ter dois ou mais construtores.
*/
#include <iostream>
#include <string.h>
using namespace std;

class Estudante
{
private:
	char nome[100];
	int idade;
public: 

	Estudante(const char * nome)
	{
		strcpy(this->nome, "Desconhecido");
		idade = -1;
	}

	Estudante(int idade)
	{
		this->idade = idade;
	}

	int getIdade()
	{
		return idade;
	}

	void mostrarPessoa()
	{
		cout << "Nome: " << nome << endl;
		if (idade != -1)
			cout << "Idade: " << idade << endl;
		else
			cout << "Idasde desconhecida." << endl;
	}
};

int main(int argc, char *argv[])
{
	Estudante e1("Emanuelle"), e2(28);

	e1.mostrarPessoa();
	e2.mostrarPessoa();

	return 0;
}
// Criando um construtor de cópias
#include <iostream>
#include <string.h>
using namespace std;

class Estudante
{
protected:
	char * nome;
	int ID;

public:
	Estudante(const char * novoNome, int novoID)
	{
		cout << "Construindo " << novoNome << endl;
		int tam = strlen(novoNome) + 1;

		nome = new char[tam];
		strcpy(nome, novoNome);
		ID = novoID;
	}

	Estudante(const Estudante & e)  // Construtor de cópias
	{
		/*
			Aloca um novo bloco de memória de pilha
			a cópia de 'nome', depois ele copia a string
			no bloco do nome antes de concatenar o nome do
			aluno na linha seguinte.
		*/
		cout << "construindo a cópia de" << e.nome << endl;

		int tam = strlen(e.nome) + 30;
		this->nome = new char[tam];
		strcpy(this->nome, "Copia de ");
		strcat(this->nome, e.nome);
		this->ID = e.ID;
	}

	~Estudante()  // O destrutor retorna a String original à pilha
	{
		cout << "Destruindo " << nome << endl;
		delete[] nome;
		nome = 0;
	}

	const char* getNome()
	{
		return nome;
	}

	int getID()
	{
		return ID;
	}
};

void otherFun(Estudante e)
{
	
}

void fun()
{
	Estudante e("Emanuelle", 1111);

	otherFun(e);
	Cout << "O nome do Estudante: " << e.getNome << endl;
}

int main(int argc, char *argv[])
{
	fun();

	return 0;
}
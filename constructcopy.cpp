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
		cout << "construindo a cópia de" << e.nome << endl;

		int tam = strlen(e.nome) + 30;
		this->nome = new char[tam];
		strcpy(this->nome, "Copia de ");
		strcat(this->nome, e.nome);
		this->ID = e.ID;
	}

	~Estudante()
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
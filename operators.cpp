/*
	116:
	Sobrecarregando Operadores:
	C++ permite que voce defina os operadores existentes
	para as classes que criar.
	O operador deve ser uma funcao membro.
*/
#include <iostream>
#include <string.h>
using namespace std;

class Estudante
{
  protected:
	char *nome;
	int ID;

	void init(const char *novoNome, int novoID)
	{
		int tam = strlen(novoNome) + 1;

		nome = new char[tam];

		strcpy(nome, novoNome);
		ID = novoID;
	}

	void destruct()
	{
		delete[] nome;
		nome = 0;
	}

  public:
	Estudante(const char *novoNome, int novoID)
	{ /*
		O construtor aloca memoria da pilha para uso
		da armazenagem do nome do aluno.
	  */
		cout << "Construindo novo nome!" << endl;

		init(novoNome, novoID);
	}

	Estudante(Estudante &e)
	{
		cout << "construindo copia de: " << e.nome << endl;
		init(e.nome, e.ID);
	}

	virtual ~Estudante()
	{
		cout << "Destruindo" << nome << endl;
		destruct();
	}
	// Sobrecarregar o operador de designacao.
	Estudante &operator=(Estudante &origem)
	{
		if (this != &origem)
		{
			cout << "Atribuindo " << origem.nome << "para" << nome << endl;
			// Primeiramente destroi o objeto existente com 'destruct'.
			destruct();

			// Copia o objeto 'origem'.
			init(origem.nome, origem.ID);
		}
		return *this;
	}
	const char *getNome()
	{
		return nome;
	}

	int getID()
	{
		return ID;
	}
};

void fun()
{
	/*
		A funcao fun() cria inicialmente o objeto 'e1'.

	*/
	Estudante e1("Emanuelle", 1111);
	Estudante e2("Joaquim", 2222);

	e2 = e1;
	/*
		A funcao designa e2 para e1.
		Eh copiado o ponteiro e1.nome em
		e2.nome, de modo que os dois objetos
		passam a apontar para o mesmo bloco
		de memoria da pilha.
	*/
}

int main(int argc, char *argv[])
{
	fun();
	return 0;
}
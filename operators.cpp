/*
	Sobrecarregando Operadores
	C++ permite que você defina os operadores existentes
	para as classes que criar.
	O operador deve ser uma função membro.
*/
#include <iostream>
using namespace std;

class Estudante
{
protected:
	char * nome;
	int ID;


	void init(const char * novoNome, int novoID)
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
	Estudante(const char * novoNome, int novoID)
	{ /*
		O construtor aloca memória da pilha para uso
		da armazenagem do nome do aluno.
	  */
		cout << "Construindo novo nome!" << endl;

		init(novoNome, novoID);
	}

	Estudante(Estudante & e)
	{
		cout << "construindo copia de: " << e.nome << endl;
		init(e.nome, e.ID);
	}

	virtual ~Estudante()
	{
		cout << "Destruindo" << nome << endl;
		destruct();
	}
// Sobrecarregar o operador de designação
	Estudante& operator=(Estudante& origem)
	{
		if(this != &origem)
		{
			cout << "Atribuindo " << origem.nome << "para" << nome << endl;
			// primeiramente destrói o objeto existente com destruct
			destruct();

			//copia o objeto origem
			init(origem.nome, origem.ID);
		}
		return *this;
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

void fun()
{
	/*
		A função fun() cria inicialmente o objeto 'e1'

	*/
	Estudante e1("Emanuelle", 1111);
	Estudante e2("Joaquim", 2222);

	e2 = e1; 
	/*
		A função designa e2 para e1.
		É copiado o ponteiro e1.nome em
		e2.nome de modo que os dois objetos
		passam a apontar para o mesmo bloco
		de memória da pilha.
	*/
}

int main(int argc, char *argv[])
{
	fun();
	return 0;
}
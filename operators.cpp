/*
	Sobrecarregando Operadores
	C++ permite que voc� defina os operadores existentes
	para as classes que criar.
	O operador deve ser uma fun��o membro.
*/
#include <iostream>
using namespace std;

class Estudante
{
protected:
	char * nome;
	int ID;
public:
	Estudante(const char * novoNome, int novoID)
	{ /*
		O construtor aloca mem�ria da pilha para uso
		da armazenagem do nome do aluno.
	  */
		cout << "Construindo novo nome!" << endl;

		int tam = strlen(novoNome) + 1;

		nome = new char[tam];

		strcpy(nome, novoNome);
		ID = novoID;
	}

	~Estudante()
	{
		cout << "Destruindo" << nome << endl;
		delete[] nome;
		nome = 0;
	}
};

void fun()
{
	/*
		A fun��o fun() cria inicialmente o objeto 'e1'

	*/
	Estudante e1("Emanuelle", 1111);
	Estudante e2("Joaquim", 2222);

	e2 = e1; 
	/*
		A fun��o designa e2 para e1.
		� copiado o ponteiro e1.nome em
		e2.nome de modo que os dois objetos
		passam a apontar para o mesmo bloco
		de mem�ria da pilha.
	*/
}

int main(int argc, char *argv[])
{

	return 0;
}
/*
	Funcoes amigas!
*/
#include <iostream>
using namespace std;

class Estudante
{
	friend void setIdade(Estudante *e, int idade);

  protected: // Membros protegidos
	int idade;
};

void setIdade(Estudante *e, int idade)
{
	e->idade = idade;
	cout << "Idade: " << e->idade << endl;
}

int main(int argc, char *argv[])
{
	Estudante *e; // Objeto

	e = new Estudante;

	setIdade(e, 28);

	return 0;
}
// Fun��es membro fora da classe.
#include <iostream>
using namespace std;

class Pessoa
{
public:
	int idade;

	void setIdade(int indade);  // Declarei a fun��o dentro da classe
};

void Pessoa::setIdade(int idade)  // Desenvolvi a fun��o fora da classe
{// coloquei que a fun��o pertence � 'Pessoa'
	this->idade = idade;
}

int main(int argc, char *argv[])
{
	Pessoa p;

	p.setIdade(10);

	cout << p.idade << endl;

	return 0;
}
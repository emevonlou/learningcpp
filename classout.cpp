// Funções membro fora da classe.
#include <iostream>
using namespace std;

class Pessoa
{
public:
	int idade;

	void setIdade(int indade);  // Declarei a função dentro da classe
};

void Pessoa::setIdade(int idade)  // Desenvolvi a função fora da classe
{// coloquei que a função pertence à 'Pessoa'
	this->idade = idade;
}

int main(int argc, char *argv[])
{
	Pessoa p;

	p.setIdade(10);

	cout << p.idade << endl;

	return 0;
}
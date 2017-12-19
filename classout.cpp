// Funcoees membro fora da classe.
#include <iostream>
using namespace std;

class Pessoa
{
public:
	int idade;

	void setIdade(int idade);  // Declare a funcao dentro da classe
};

void Pessoa::setIdade(int idade)  // Funcao desenvolvida fora da classe
{
	// coloque que a funcao pertence a 'Pessoa'
	this->idade = idade;
}

int main(int argc, char *argv[])
{
	Pessoa p;

	p.setIdade(10);

	cout << p.idade << endl;

	return 0;
}
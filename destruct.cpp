/*
	Destrutores
	Função membro especial que separa o objeto
	e afasta qualquer recurso que o construtor
	tenha alocado.
	-Não possue retorno

*/
#include <iostream>
using namespace std;

class Pessoa
{
private:
	int idade;
	int * notas;
public:

	// construtor
	Pessoa(int idade)
	{
		this->idade = idade;
		notas = new int[10];
	}

	// Destrutor
	~Pessoa()
	{
		delete[] notas;
		notas = 0;
	}

	void mostrarIdade()
	{
		cout << "Idade: " << idade << endl;
	}
};

int main(int argc, char *argv[])
{
	Pessoa pessoa(28);

	pessoa.mostrarIdade();

	return 0;
}
// Ponteiros para Objetos!
#include <iostream>
using namespace std;

class Carro
{
public:

	void mostrarMensagem()
	{
		cout << "Primeira Funcao" << endl;
	}

	void mostrarMensagem(int ano)
	{
		cout << "Ano: " << ano << endl;
	}
};

int main(int argc, char *argv[])
{

	Carro carro;
	carro* pcarro;
	
	*pcarro = &carro;

	pcarro->mostrarMensagem();
	return 0;
}
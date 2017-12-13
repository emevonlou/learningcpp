/*
	Funções virtuais
	acrescentam a cada objeto um ponteiro
	adicional oculto ao passo que uma classe sem
	funções virtuais não possui esse ponteiro.
*/

#include <iostream>
using namespace std;

class Estudante
{
public:
	virtual double calcular()
	{
		return 0.0;
	}
};

class EstudanteFormado : public Estudante 
{
public:
	virtual double calcular()
	{
		return 1.0;
	}
};

double fun(Estudante * e)
{
	return e->calcular();
}

int main(int argc, char *argv[])
{
	Estudante e;

	cout << "O valor eh: " << fun(&e) << endl;

	EstudanteFormado ef;

	cout << "O valor eh: " << fun(&ef) << endl;

	return 0;
}
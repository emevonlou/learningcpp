/*
	112:
	Heranca!
	-Transmite propriedades.
	-Permite que vc descreva coisas de forma econ�mica.
	-Uma classe herda caracter�sticas de outra classe.
*/
#include <iostream>
#include <string.h>
using namespace std;

class Mamifero
{
private:
	float peso;
	int idade;

public:
	Mamifero(float peso, int idade)
	{
		this->peso = peso;
		this->idade = idade;
	}
	float getPeso()
	{
		return peso;
	}
	int getIdade()
	{
		return idade;
	}
};

class Baleia : public Mamifero
{
private:
	char oceano[50];

public:
	Baleia(const char *oceano, float peso, int idade) : Mamifero(peso, idade)
	{
		strcpy(this->oceano, oceano);
	}
	void mostrarBaleia()
	{
		cout << "Oceano: " << oceano << endl;
		cout << "Peso: " << getPeso() << endl;
		cout << "Idade: " << getIdade() << endl;
	}
};
int main(int argc, char *argv[])
{
	Baleia baleia("Pacifico", 2000, 20);

	baleia.mostrarBaleia();

	return 0;
}
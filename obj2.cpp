// 115: Array com objetos.
#include <iostream>
using namespace std;

class Carro
{
  public:
	int ano;
	float peso;
};

int main(int argc, char *argv[])
{
	Carro carros[3];

	carros[0].ano = 2015;
	carros[0].peso = 756.45;
	carros[1].ano = 2016;
	carros[1].peso = 678.50;
	carros[2].ano = 2017;
	carros[2].peso = 840.50;
	carros[3].ano = 2009;
	carros[3].peso = 900.48;

	cout << "Imprimindo todos os carros: " << endl
		 << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "\nAno: " << carros[i].ano;
		cout << "\nPeso: " << carros[i].peso << endl;
	}

	return 0;
}
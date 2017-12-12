/*
	Membros estáticos
	Sinalisado com a palavra chave 'static'
*/

#include <iostream>
using namespace std;

class Estudante
{
protected:
	static int total_estudantes;
public:
	Estudante()
	{
		total_estudantes++;
	}

	void showTotal
	{
		cout << "Total de estudantes: " << total_estudantes << endl;
	}

	~Estudante()
	{
		total_estudantes--;
	}
};

int Estudante::total_estudantes = 0;

int main(int argc, char *argv[])
{
	Estudante e1, e2, e3;

	e1.showTotal;

	return 0;
}
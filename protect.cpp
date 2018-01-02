/* 
	Membros protegidos(Protected)
	Inacessiveis de fora da classe.
	permite que uma classe esteja protegida
	e seja responsavel pela sua pr�pria situa��o interna.
*/
#include <iostream>
using namespace std;

class Estudante
{
  protected: // Membros protegidos
	int idade;

  public:
	void setIdade(int idade) //
	{
		this->idade = idade;
		cout << "Idade: " << idade << endl;
	}
};

int main(int argc, char *argv[]) // fun��o externa
{
	Estudante e; // Objeto

	e.setIdade(28);
	/*
		setIdade � membro da classe Estudante
		Ent�o pode acessar o membro protegido
		'idade' da classe.
	*/

	return 0;
}
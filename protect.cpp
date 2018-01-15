/* 
	Membros protegidos(Protected):
	Inacessiveis de fora da classe.
	Permite que uma classe esteja protegida
	e seja responsavel pela sua propria situacao interna.
*/
#include <iostream>
using namespace std;

class Estudante
{
  protected: // Membros protegidos.
	int idade;

  public:
	void setIdade(int idade) 
	{
		this->idade = idade;
		cout << "Idade: " << idade << endl;
	}
};

int main(int argc, char *argv[]) // Funcao externa.
{
	Estudante e; // Objeto.

	e.setIdade(28);
	/*
		'setIdade' eh o membro da classe 'Estudante',
		Entao pode acessar o membro protegido
		'idade' da classe.
	*/

	return 0;
}
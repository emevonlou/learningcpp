#include <iostream>
using namespace std;

class Pessoa
{
    // Modificador de acesso
  private:
    // Membros privados são acessados apenas
    // por funções membro e funções amigas da classe.
    // Dois atributos: Idade e um ponteiro.
    int idade;
    int *vet;
  public:
    // Construtor da classe.
    Pessoa(int idade)  // Recebendo o parâmetro idade.
    { // Membros construtores são
      // implicitamente chamados quando um objeto é criado.
        this->idade = idade;
        vet = new int[10];
    }
    ~Pessoa()  // Destrutor.
    {
        // Utilizando o delete[]
        // para desalocar espaço em memória criado pelo new int[]
        delete [] vet;
    }
};

int main(int argc, char *argv[])
{

    return 0;
}
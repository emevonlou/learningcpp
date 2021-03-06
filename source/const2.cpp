// Construtores e destrutores.
#include <iostream>
#include <string.h>
using namespace std;

class Ficha
{
  private:
    char nome[100];
    int idade;
    int *parentes;

  public:
    // Inicializando o construtor para acessar os dados protegidos.
    Ficha(const char *nome, int idade) // Passando os argumentos.
    {
        strcpy(this->nome, nome);
        this->idade = idade;
        parentes = new int[100]; // Alocando memória fora da pilha.
        // Essa memória precisa ser retornada através do destrutor.
        cout << "Entrou no construtor: " << nome << endl;
    }
    char *getNome()
    {
        return nome;
    }
    int getIdade()
    {
        return idade;
    }
    // Destrutores não tem um tipo de retorno.
    // Não podem ser chamados como as funções normais podem.
    ~Ficha()
    {
        cout << "Estrou no destrutor: " << nome << endl;
        delete[] parentes;
    }
};

int main(int argc, char *argv[])
{
    Ficha pessoas[3] =
        {
            {"joao", 30},
            {"maria", 20},
            {"pedro", 40},
        };

    // cout << "Nome: " << p.getNome() << endl;
    // cout << "Idade: " << p.getIdade() << endl;

    return 0;
}

// 82: Programando com classe(agrupamento de dados com classe).
#include <iostream>
using namespace std;

class Pessoa // Nome da classe com letra maiúscula.
{
  private: // Modificador de acesso.
    int idade;
    float peso;

  public:
    Pessoa(int idade, float peso) // Construtor.
    {
        this->idade = idade;
        this->peso = peso;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    int getIdade()
    {
        return idade;
    }

    void setPeso(float peso)
    {
        this->peso = peso;
    }

    float getPeso()
    {
        return peso;
    }
};

int main(int argc, char *argv[])
{
    Pessoa pessoa(38, 40); // Construindo o objeto usando o construtor.
    Pessoa *ppessoa;

    ppessoa = &pessoa;

    // pessoa.setIdade(38);  // Acesso aos membros do objeto.
    // pessoa.setPeso(44.3);

    cout << "Idade: " << ppessoa->getIdade() << endl;
    cout << "Peso: " << ppessoa->getPeso() << endl;

    return 0;
}
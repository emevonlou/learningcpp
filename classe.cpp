// Programando com classe(agrupamento de dados com classe)
#include <iostream>
using namespace std;

class Pessoa   // nome da classe com letra maiúscula
{
private:    // modificador de acesso
    int idade;
    int peso;

public:

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
    Pessoa pessoa;

    pessoa.setIdade(38);  // Acesso aos membros do objeto
    pessoa.setPeso(44.3);

    cout << "Idade: " << pessoa.getIdade() << endl;

 return 0;
}
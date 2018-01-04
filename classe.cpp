// 81: Programando com classe(agrupamento de dados com classe).
#include <iostream>
using namespace std;

class Pessoa // Nome da classe com letra maiúscula.
{
  private:
/*
    Modificador de acesso.
    Deve ser 'private' para garantir a segurança de alterações acidentais.
    Sendo somente acessíveis essas variáveis através de métodos,
    Contribuindo no encapsulamento de dados.
*/
    int idade;
    int peso;

  public:
    // Métodos
    void setIdade(int idade)
    {
        this->idade = idade; // This = referência a variável dessa instância que vai receber o parâmetro 'idade'.
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

    pessoa.setIdade(38); // Acesso aos membros do objeto.
    pessoa.setPeso(44.3);

    cout << "Idade: " << pessoa.getIdade() << endl;

    return 0;
}
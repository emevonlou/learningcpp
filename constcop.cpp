// 177: Cosntrutor de cópias!
#include <iostream>
#include <string.h>
using namespace std;

class Estudante
{
  public:
    int idade;
    char *nome;

    // Cosntrutor inicializando a idade com zero.
    Estudante(const char *nome)
    {
        cout << "Construindo o objeto..." << endl;
        idade = 0;
        int tam = strlen(nome) + 1;
        this->nome = new char[tam]; // Alocando memória fora da pilha.
        strcpy(this->nome, nome);  // Copiando o nome para this->nome
    }

    // construtor de cópia para uma cópia não superficial
    Estudante(const Estudante& e)
    {
        cout << "Construindo copia..." << endl;

        int tam = strlen(e.nome)+ 50;
        this->nome = new char[tam];
        strcpy(this->nome, "copia de ");
        strcat(this->nome, e.nome);
    }

    // função de acesso que retorna um const char*
    const char* getNome()
    {
        return nome;
    }
    
};

int main(int argc, char *argv[])
{
    Estudante e("EmanuelleVonLou");

    cout << "Idade: " << e.idade << endl;

    return 0;
}
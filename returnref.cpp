/*
    Uma função que retorna uma referência
    funciona como um 'apelido' para a variavel
    que esta sendo referenciada.
    - Quando fazer o retorno por referencia?
    Quando você tem uma quantidade de informação 
    considerável à ser retornada.
*/
#include <iostream>
#include <string>
using namespace std;

typedef struct Pessoa
{
    string nome;
    int idade;
    double peso, altura;

}t_pessoa;

int main(int argc, char*argv[])
{
    t_pessoa pessoa = {"Emanuelle", 39, 45.44, 1.55};

    
    return 0;
}
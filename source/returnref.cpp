/*
    160:
    Uma função que retorna uma referência
    funciona como um 'apelido' para a variavel
    que esta sendo referenciada.
    - Quando fazer o retorno por referencia?
    Quando você tem uma quantidade de informação 
    considerável à ser retornada.
*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

typedef struct Pessoa
{
    string nome;
    int idade;
    double peso, altura;

} t_pessoa;

double &calcular_imc(t_pessoa &pessoa)
{
    // double result = pessoa.peso / (pessoa.altura * pessoa.altura);
    double result = pessoa.peso / pow(pessoa.altura, 2);
    double &imc = result;

    return imc;
}

int main(int argc, char *argv[])
{
    t_pessoa pessoa = {"Emanuelle", 39, 45.44, 1.55};

    cout << "IMC: " << calcular_imc(pessoa) << endl;

    return 0;
}
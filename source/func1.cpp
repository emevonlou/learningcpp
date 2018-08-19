// 58:
#include <iostream>
using namespace std;

int somar(int num1, int num2) //Função/argumentos
{
    int soma;

    soma = num1 + num2; // soma recebe a soma dos valores passados por parâmetro

    return soma; // retorna a soma
}

void imprime() // não retorna nada, não recebe parâmetros.
{
    cout << "Learning C++" << endl;
}

int main(int argc, char *argv[])
{
    imprime();                     // chamada da função void()
    cout << somar(10, 20) << endl; // chamada da fução somar()

    return 0;
}
/*
    73:
    A memória em c++ é dividida em duas partes: 'stacks' e 'Heap'.
    Todas as variáveis declaradas dentro da função, irão ocupar
    memória da 'stack'. A 'Heap' é um espaço de memória que é utilizada
    pra alocar memória dinamicamente durante a execução do programa.
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    double *num = NULL; // Ponteiro inicializado com NULL.

    num = new double;     // Requer memória para a variável.
    *num = 10;            // Atribui valor.
    cout << *num << endl; // Exibe o valor.

    delete num; // Libera memória.

    return 0;
}
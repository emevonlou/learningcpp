// 70: Passagem por referência.
#include <iostream>
using namespace std;

void fun(int *n) // Variável que armazena endereço(ponteiro).
{
    *n = 20; // n está armazenando o endereço e modifica o valor da variável pra 20.
}

int main(int argc, char *argv[])
{
    int n = 10; // Variável n recebe valor inicial 10.

    fun(&n); // Passando na chamada da função o endereço da variável.

    cout << n << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // variável inteira do tipo ponteiro.
    // Usando new para alocar espaço para dez inteiros.
    int *p = new int[10];

    // Colocando 1 na primeira posição.
    *p = 1;
    // Segunda posição: Colocando 2.
    *(p + 1) = 2;

    cout << *p << endl
         << *(p + 1) << endl;
    // Liberando memória com delete []
    delete[] p;
    return 0;
}
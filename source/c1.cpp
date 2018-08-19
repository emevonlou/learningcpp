// 100:
#include <iostream>
using namespace std;

// Um bloco é um conjunto de declarações logicamente conectadas, cercadas por chaves abertas e fechadas.
int main(int argc, char *argv[])
{
    int var = 10; // Variável inteira.
    int *p1, *p2; // Ponteiros.

    p1 = &var; // O ponteiro p1 e p2 guardam o endereço de 'var'.
    p2 = &var;

    *p2 = 20;
    *p1 = 15;

    cout << var << endl;

    return 0;
}
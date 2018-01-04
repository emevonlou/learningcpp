// 24: Variável char com chaves apresentando o caractere 'null'.
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char nome[] = {'E', 'M', 'A', 'N', 'U', 'E', 'L', 'L', 'E', '\0'}; // '\0' é um caractere null-considerado false
    int i = 0;

    while (nome[i])
    {
        cout << nome[i];
        cout << i++;
    }

    return 0;
}
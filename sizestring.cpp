// 23:
#include <iostream>
#include <string.h> // Função strlen();
using namespace std;

void inverte(char nome[])
{
    // Função que calcula o tamanho da string.
    int tam = strlen(nome);

    // Eu posso ter um loop sem chaves!!
    for (int i = tam - 1; i >= 0; i--)
        cout << nome[i];
}

int main(int argc, char *argv[])
{
    char nome[] = "Emanuelle";
    inverte(nome); // Chama a função.
    return 0;
}
#include <iostream>
#include <string.h> // função strlen();
using namespace std;

void inverte(char nome[])
{
    // função que calcula o tamanho da string.
    int tam = strlen(nome);

    // Eu posso ter um loop sem chaves!!
    for(int i = tam -1; i>= 0; i--)
        cout << nome[i];
}

int main(int argc, char *argv[])
{
    char nome[] = "Emanuelle";
    inverte(nome); // chama a função
    return 0;
}
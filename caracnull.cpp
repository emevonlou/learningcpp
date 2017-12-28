// 2:
#include <iostream>
using namespace std;

void inverte(char nome[])
{
    // obtendo o tamanho da string
    int tam;
    // Eu posso ter um loop sem chaves
    for (tam = 0; nome[tam]; tam++)
    {
        // string invertida
        for (int i = tam - 1; i >= 0; i--)
            cout << nome[i];
    }
}

int main(int argc, char *argv[])
{
    char nome[] = "Emanuelle";
    // chama a função
    inverte(nome);
    return 0;
}
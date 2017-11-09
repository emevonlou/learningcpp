#include <iostream>
#include <string.h> // função strlen();
using namespace std;

void inverte(char nome[])
{
    // função ue calcula o tamanho da string
    int tam = strlen(nome);
    // Eu posso ter um loop sem chaves
    
    for(int i = tam -1; i>= 0; i--)
        cout << nome[i];
}

int main(int argc, char *argv[])
{
    char nome[] = "Emanuelle";
    // chama a função
    inverte(nome); 
    return 0;
}
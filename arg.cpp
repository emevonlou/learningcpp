// 104:
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    /* 
        argc = arg(argumentos) c(counter- quantidade de argumentos)
        Eu posso passar argumentos para o meu programa
        --O primeiro argumento sempre é o nome
        do proprio programa.

    */

    /*
        argv =
    
    */

    /*
       char* array = char[100];
       *gravando um bloco de memoria grande o bastante pra
       conter ate 100 caracteres da pilha.
       *A palavra reservada 'new' retorna um ponteiro
       para o array recem criado.
       *A pilha de memoria não é alocada até a hora de execução,
       ou seja, o tamanho do array não é limitado a constantes
       que são determinadas em tempo de compilação.
    */

    cout << "argc: " << argc << endl;
    cout << "argv[0]: " << argv[0] << endl; // imprimindo o primeiro elemento

    return 0;
}
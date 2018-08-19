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
        argv = São as strings de caracteres.
    
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

    cout << "argv[0]: " << argv[0] << endl
         << endl; // imprimindo o primeiro elemento
    cout << "Quantidade de argumentos: " << argc << endl;
    cout << "Argumentos passados: " << endl;

    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl; // imprimir argumentos que foram passados
    }
    return 0;
}
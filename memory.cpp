/* 
    72:
    --Alocando memória dinamicamente(Fora da pilha)--
    O C++ oferece uma área extra na memória
    com o objetivo de alocação de memória.
    conhecido pelo nome de Heap(pilha).
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char *p = new char[256];
    /*
        'new' é a palavra reservada para a alocação de memoria.
        No caso, a palavra-chave retorna um ponteiro para o array
        recém criado.
        A pilha de memória não é alocada até o momento de execução.
    */

    p[0] = 'a';
    p[1] = 'b';
    p[2] = 'c';
    p[3] = '\0'; // '\0' indica o final.

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;

    /*
     Quando você aloca memória fora da pilha, precisa retorná-la.
    Você retorna a memória á pilha usando a palavra reservada:
    'delete'.
*/

    delete[] p;
    p = NULL; // Zerando um ponteiro.

    return 0;
}
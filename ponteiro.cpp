// 28:
#include <iostream>  // Entrada e saida de dados.
using namespace std; // Declarando espaço de nome std padrao.

int main(int argc, char *argv[])
{
    int var = 10;
    int *pvar; // Ponteiro.

    // Sempre inicializar um ponteiro antes de utiliza-lo.
    pvar = &var;           // &var é o endereço da variável var.
    cout << *pvar << endl; // Acessa o conteúdo da variável var atraves do ponteiro.
    *pvar = 20;            // Muda o valor da variável através do ponteiro.
    cout << var << endl;

    return 0;
}
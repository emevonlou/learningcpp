// 28:
#include <iostream>  // entrada e saida de dados
using namespace std; // declarando espaço de nome std padrao

int main(int argc, char *argv[])
{
    int var = 10;
    int *pvar; // ponteiro

    // sempre inicializar um ponteiro antes de utiliza-lo
    pvar = &var;           // &var é o endereço da variável var
    cout << *pvar << endl; // acessa o conteúdo da variável var atraves do ponteiro
    *pvar = 20;            // muda o valor da variável através do ponteiro
    cout << var << endl;

    return 0;
}
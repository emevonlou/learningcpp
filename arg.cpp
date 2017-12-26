#include <iostream>
using namespace std;;

int main(int argc, char *argv[])
{
    /* 
        argc = arg(argumentos) c(counter)
        eu posso passar argumentos para o meu programa
        --o primeiro argumento sempre é o nome
        do proprio programa.

    */

    cout << "argc: " << argc << endl;
    cout << "argv[0]: " << argv[0] << endl;

    return 0;
}
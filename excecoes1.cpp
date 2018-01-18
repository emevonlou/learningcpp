/*
     Palavras reservadas 'try', 'catch','trhow'.
     *Try: Tentar executar um bloco de codigo;
     *Catch: Pegar algo para tratar;
     *Trow: Lança uma excecao(erro) que a funcao pode pear através do 'catch'.
*/
#include <iostream>
using namespace std;

int fat(int n) // Fatorial
{
    if (n == 0 || n == 1)
        return 1; // Porque fatorial de zero ou um é um.
    return n * fat(n - 1);
}

int main(int argc, char *argv[])
{

    return 0;
}

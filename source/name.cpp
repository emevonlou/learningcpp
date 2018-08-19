// 27:
#include <iostream> // input e output.
#include <string.h> // lib de manipulação com strings.

using namespace std;
/*
    (int argc, char *argv[]) ---> Parametros para passar por linha de comando/ 
    int argc = quantidade de argumentos passados por linha de comando
    char *argv = os comandos passados.  
*/
int main(int argc, char *argv[])
{
    char nome[100], sobrenome[100];

    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Digite seu sobrenome: " << endl;
    cin >> sobrenome;

    strcat(nome, sobrenome); // Concatena strings.
    cout << "Seu nome eh: " << nome << endl;

    return 0;
}
/* 
    ----Container list-----------------
    Com a list se pode inserir ou apagar 
    elementos de qualquer lugar e fazer
    interações em ambas direções.
*/

#include <iostream>
#include <list>
#include <string.h>
using namespace std;

class Pessoa
{
public:
    char * nome;

    Pessoa(const char * novo_nome)
    {
        int tam = strlen(novo_nome);
        nome = new char[tam + 1];
        strcpy(nome, novo_nome);
    }
};

int main(int argc, char *argv[])
{
    Pessoa p1("Emanuelle"), p2("Joaquim"), p3("João");

    list<Pessoa> lista;

    lista.push_back(p1);
    lista.push_back(p2);
    lista.push_back(p3);

    list<Pessoa>::iterator it;

    for(it = lista.begin(); it != lista.end(); it++)
    {
        cout << it->nome;
    }

    return 0;
}
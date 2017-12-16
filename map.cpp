/*
    ----map(mapas)-----
    Uma associação chave e valor.
    Você acessa o valor através da chave, 
    onde cada elemento é um par
    composto pela chave e pelo valor.
    Você mapeia um valor através da chave.
    Obs: O mapa não garante a ordem
*/
#include <iostream>
#include <map>
using namespace std;

int main(int agrc, char *argv[])
{
    map<string, int> mapa;

    mapa["Emanuelle"] = 38;
    mapa["Joaquim"] = 7;
    mapa["Joao"] = 19;

    map<string, int>::iterator it;

    for(it = mapa.begin(); it != mapa.end(); it++)
    {
        cout << "Idade do " << it->first << ":" << it->second << endl;
    }

    return 0;
}
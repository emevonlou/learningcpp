// 166:
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[])
{
    map<int, string> mapa;
    mapa[1] = "Joao";
    mapa[2] = "Joaquim";
    mapa[3] = "Emanuelle";

    cout << mapa[1] << endl;
    cout << mapa[2] << endl;
    cout << mapa[3] << endl;

    // Limpar todos os elementos do mapa
    // mapa.clear();

    if (mapa.empty())
    {
        cout << "Mapa Vazio!";
    }
    else
    {
        cout << "Mapa nao vazio!!";
    }

    if (mapa.count(1) > 0)
        cout << "1 eh elemento do mapa." << endl;
    else
        cout << "1 nao eh elemento do mapa." << endl;
    // Mostrando todos os elementos.
    map<int, string>::iterator it;
    for (it = mapa.begin(); it != mapa.end(); ++it)
        // it->first = acessa a chave; it->second = acessa o valor associado a chave.
        cout << "A chave " << it->first << " => " << it->second << endl;

    // A Funçao find() retorna um iterador para o elemento.
    

    return 0;
}
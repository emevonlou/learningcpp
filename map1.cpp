// 166: A 'map' é um container associativo.
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
    it = mapa.find(2); // procuro pela chave com o valor 2.
    mapa.erase(it);    // Quero excluir o elemento cuja chave é 2.

    cout << endl;

    // Verificando se uma chave existe.
    if (mapa.find(2) == mapa.end())
        cout << "\nChave 2 NAO existe!\n";
    else
        cout << "\nChave 2 existe!\n";

    it = mapa.begin();
    mapa.insert(pair<int, string>(2, "Joaquim"));

    // Mostrando todos os elementos.
    for (it = mapa.begin(); it != mapa.end(); ++it)
        // it->first = acessa a chave; it->second = acessa o valor associado a chave.
        cout << "A chave " << it->first << " => " << it->second << endl;

    // Utilizando multimap.
    multimap<int, string> mm;
    mm.insert(pair<int, string>(1, "python 2"));
    mm.insert(pair<int, string>(1, "python 3"));
    mm.insert(pair<int, string>(2, "C"));
    mm.insert(pair<int, string>(2, "C++"));
    mm.insert(pair<int, string>(3, "Ruby"));

    multimap<int, string>::iterator it2 = mm.find(1);

    cout << it2->second << endl;
    
    while(it2 != mm.end())
    {
        cout << it2->first << "=>" << it2->second << endl;
        it2++;
    }

    return 0;
}
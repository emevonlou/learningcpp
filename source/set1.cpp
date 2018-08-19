/*
     170: set-> Estrutura de dados do tipo conjunto.
    São implementadas usando arvores binarias de busca.
*/
#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[])
{
    // O conjunto não imprime/permite elementos repetidos.
    int vet[] = {10, 10, 20, 30, 40};
    // Na impressão o conjunto é ordenado crescentemente.
    // No nosso código,um set(conjunto de inteiros) é chamado de myset.
    // Inicializando o construtor com o vetor.
    set<int> myset(vet, vet + 5);

    // Iterator.
    set<int>::iterator it = myset.begin();
    cout << "Mostrando os elementos: ";
    while (it != myset.end())
    {
        cout << *it << " ";
        it++;
    }

    // myset.clear(); // Removendo todos os elementos.

    // Deletando o primeiro elemento com erase().
    // it = myset.begin();
    // myset.erase(it);

    if (myset.empty())
        cout << "\nConjunto Vazio!!!\n";
    else
        cout << "\n\nConjunto NAO Vazio!!!\n";

    it = myset.begin(); // o Iterador começando de 'myset.begin();'
    cout << "Mostrando os elementos: ";
    while (it != myset.end())
    {
        cout << *it << " ";
        it++;
    }

    // Verificando se um elemento existe.(procurando um elemento).
    it = myset.find(70);
    if (it == myset.end())
        cout << "\n\nO elemento 70 nao existe\n";
    else
        cout << "\n\nO elemento 70 existe.\n";

    cout << "Tamanho do conjunto: " << myset.size() << endl;

    return 0;
}
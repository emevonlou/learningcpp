/*
     170: set-> Estrutura de dados do tipo conjunto.
    São implementadas usando arvores binarias de busca.
*/
#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[])
{
    int vet[] = {10, 20, 30, 40};
    // Um set(conjunto de inteiros) chamado de myset.
    // Inicializando o construtor com o vetor.
    set<int> myset(vet, vet+ 5);

    

    return 0;
}
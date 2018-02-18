/*
     170: set-> Conjunto como tipo de estrutura de dados.
    São implementadas usando arvores binarias de busca.
*/
#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[])
{
    int vet[] = {10, 20, 30, 40};
    set<int> myset(vet, vet+5);

    return 0;
}
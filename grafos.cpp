/*
    173:
    Grafo- Matriz de adjacencia.
    É uma entidade composta de duas partes:
    Vértices(nós) e Arestas(linhas).
    Os nós são as entidades("bolinhas") que você quer modelar.
    As arestas(Arcos) são as relações dessas entidades.
*/
#include <iostream>
using namespace std;

int grafo[5][5] =
    {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 0, 1, 1},
        {0, 0, 1, 0, 1},
        {0, 0, 1, 1, 0}};

bool tem_ligacao(int[v1], int[v2])
{
    if (grafo[v1][v2])
        return true;
    return false;
}

int main(int argc, char *argv[])
{

    cout << tem_ligacao(0, 2) << endl;
    return 0;
}
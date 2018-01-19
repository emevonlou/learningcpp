// 140:
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{

    vector<int> v(3); // Obtendo 3 como tamanho inicial do vetor.
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    
    vector<int>::reverse_iterator rit;
    int i = 0; // Utilizada para atribuir valores para o vetor.

    for(rit = v.rbegin(); rit != v.rend(); rit++) // For do iterador.
    { // rbegin(),rend() -> retorna o iterador reverso que aponta para o ultimo elemento do vetor.
        *rit = ++i;
    }

    vector<int>::iterator it;
    return 0;
}

/* 
    136:
    * O vetor prealoca espaços para elementos futuros.
    * No vector cada elemento requer espaço somente para o tipo dele.
    * nao possui elementos extras.
    * Pode acessar aleatoriamente os elementos.

*/
#include <iostream>
#include <vector>
using namespace std;

int main(int atgc, char *argv[])
{
    vector<int> v;

    v.push_back(20); // A funcao 'push_back' Insere elementos no vetor.
    v.push_back(30);
    v.push_back(40);

    int tam = v.size(); // Função que retorna o tamanho do vetor.
    for (int i = 0; i < tam; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
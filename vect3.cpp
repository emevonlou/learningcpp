// 138: // utilizando o iterator.
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{

    vector<int> v(3); // Obtendo 3 como tamanho inicial do vetor.
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    vector<int>::iterator it = v.begin(); // Atribuindo valor para it(iterador).
    // Begin retorna o iterator que aponta para o primeiro elemento.
    for (it = v.begin(); it != v.end(); it++) // Iterar usando iterador.
    {  
        cout << *it << endl; // Imprimindo todos os numeros com *it.
    }

    return 0;
}

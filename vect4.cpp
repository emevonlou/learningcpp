// 139: Usando * para acessar o conteudo.
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{

    vector<int> v(3); // Obtendo 3 como tamanho inicial do vetor.
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    // Precisa usar * pra acessar o conteudo.
    cout << "Primeiro elemento: " << *v.begin() << endl;
    cout << "Ultimo elemento: " << *(--v.end()) << endl;
    

    return 0;
}

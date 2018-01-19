// 139:
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
    
    cout << "Primeiro elemento: " << *v.begin() << endl; 
    return 0;
}

// Função clear().
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v(3, 10);

    cout << v.size() << endl;
    v.clear(); // Deleta todos os elementos do vetor
    cout << v.size() << endl;

    return 0;
}
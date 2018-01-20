// Funcao empty() que verifica se o vetor esta vazio.
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v;

    if (v.empty())
        cout << "Vetor vazio!\n";
    else
        cout << "Vetor NAO vazio\n";

    v.push_back(10); // inserindo o elemento 10.

    if (v.empty())
        cout << "Vetor vazio!\n";
    else
        cout << "Vetor NAO vazio\n";

    return 0;
}
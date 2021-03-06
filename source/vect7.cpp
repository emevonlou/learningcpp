// 142: Funcao empty() e pop_back().
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    while (!v.empty()) // Vai repetir enquanto o vetor nao for vazio.
        v.pop_back();  // Retira todos os elementos do vetor.

    if (v.empty())
        cout << "Vazio.\n";
    else
        cout << "NAO Vazio.\n";

    return 0;
}
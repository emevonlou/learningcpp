// 145: Função insert()
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v(3);

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    vector<int>::iterator it = v.begin();
    v.insert(it, 40);
    v.insert(it + 2, 60);
    v.erase(v.begin() + 1); // Apaga o segundo elemento do vetor.

    for (unsigned int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    return 0;
}
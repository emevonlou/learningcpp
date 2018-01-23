// 146: Funçao swap().
#include <iostream> // cout
#include <vector> // swap()
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> a(2, 20);
    vector<int> b(3, 10);

    a.swap(b); // Funcao swap() para a troca de vetores.

    for (unsigned int i = 0; i < a.size(); i++)
        cout << a[i] << endl;
    for (unsigned int j = 0; j < b.size(); j++)
        cout << b[j] << endl;

    return 0;
}
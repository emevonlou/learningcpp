/*
    91:
    -----set(conjunto)------
    Não aceita elementos repetidos.
*/
#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[])
{
    set<int> conj;

    conj.insert(10);
    conj.insert(10);
    conj.insert(20);
    conj.insert(30);

    set<int>::iterator it;

    for (it = conj.begin(); it != conj.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "Tamanho do conjunto: " << conj.size() << endl;

    return 0;
}
// 101:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int vet[] = {1, 2, 3};
    int *p1 = &vet[0], *p2 = &vet[1];

    cout << p1 << endl;
    cout << p2 << endl;

    p1 = &vet[2]; // p1 aponta para o terceiro elemento

    if (p1 < p2)
    {
        cout << "p1 vem antes!" << endl;
    }

    return 0;
}
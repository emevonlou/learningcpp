#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v(2);

    v[0] = 1;
    v[1] = 2;

    cout << v.back() << endl; // vai retornar o ultimo elemento inserido.
    cout << v.front() << endl; // vai reornar o primeiro elemento inserido.

    return 0;
}
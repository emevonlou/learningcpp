#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v(3);

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    cout << v.at(1) << endl; // passa a posição utilizando a função 'at'
    return 0;
}
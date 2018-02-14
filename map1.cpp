// 166:
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[])
{
    map<int, string> mapa;
    mapa[1] = "Joao";
    mapa[2] = "Joaquim";
    mapa[3] = "Emanuelle";

    cout << mapa[1] << endl;
    cout << mapa[2] << endl;
    cout << mapa[3] << endl;

    return 0;
}
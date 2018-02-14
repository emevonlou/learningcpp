// 166:
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[])
{
    pair<int, string> pares[] =
        {
            make_pair(1, "Emanuelle"),
            make_pair(1, "Joaquim"),
            make_pair(1, "Joao")

        };
    map<int, string> mapa(pares, pares + 3);

    cout << mapa[1] << endl;
    cout << mapa[2] << endl;
    cout << mapa[3] << endl;

    return 0;
}
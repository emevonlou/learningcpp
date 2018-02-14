// 166:
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[])
{
    pair<int, string> pares[] =
        {
            make_pair(1, "Emanuelle"),
            make_pair(1, "Emanuelle"),
            make_pair(1, "Emanuelle")

        };
    map<int, string> mapa(pares, pares + 3);

    return 0;
}
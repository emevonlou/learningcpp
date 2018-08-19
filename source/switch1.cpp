// 186:
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

char *m;
int tamString;

void gRandom()
{
    static const char eme[] =
        "Emanuelle"
        "Von"
        "lou";
    for(int i = 0; i < tamString; ++i)
    {
        m[i] = eme[rand() % (sizeof(eme) -1)];
    }

    m[tamString] = 0;
}

int main()
{
    while(true)
    {
        gRandom();
        cout << m;
    }

    return 0;
}
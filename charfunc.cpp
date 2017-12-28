// 64:
#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[])
{
    char c = 'A';

    if (isalpha(c))
        cout << "Alfabetico" << endl;
    else
        cout << "Nao alfabetico" << endl;

    return 0;
}
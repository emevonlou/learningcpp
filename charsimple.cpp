// 19: variável char com aspas
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char nome[] = "EMANUELLE";
    int i = 0;

    /*
    while(nome[i] != '\0')
        cout << nome[i++];
    */
    do
    {
        cout << nome[i];
    } while (nome[i++]);
    return 0;
}
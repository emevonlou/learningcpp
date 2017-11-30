#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int notas[10];
    int tam;

    tam = sizeof(notas)/ sizeof(int);


    for(int i = 0; i < 10; i++)
    {
        cout << notas[i] << " ";
    }
    return 0;
}
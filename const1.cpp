#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int notas[10];
    int tam;
    int x = sizeof(notas);
    int y = sizeof(int);

    cout << "x eh:" << x << endl;
    cout << "y eh: " << y << endl;

    tam = x / y;

    cout << "O tamanho eh: " << notas << endl;
    return 0;
}
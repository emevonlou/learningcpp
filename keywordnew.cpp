//Com a palavra-chave 'new' você consegue alocar memória
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int *vet = new int[10]; // Alocando espaço na memoria pra dez inteiros

    *(vet + 0) = 10;
    cout << *(vet + 0) << endl;

    return 0;
}
// 74:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int vet[] = {1, 2, 3, 4};
    int *p_vet;                              // Ponteiro.
    int tam_vet = sizeof(vet) / sizeof(int); // calcula o tamanho do vetor.
    int i = 0;

    p_vet = &vet[0]; // Ponteiro guarda o endereço da primeira variável.

    while (i < tam_vet)
    {
        cout << *p_vet << endl;
        p_vet++;
        i++;
    }

    return 0;
}
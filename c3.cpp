// 103:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    /*
         Você pode modificar os ponteiros, 
         mas não pode modificar os inteiros
         para onde eles apontam.
    */

    const int vet[3] = {1, 2, 3};
    const int *p1 = &vet[0];
    int const *p2 = &vet[1];
    int *const p3 = new int[3]; // Você deve inicializar quando declarado.
    const char *const p4 = "Emanuelle";
    // Não se consegue alterar o valor dele, nem os caracteres que aponta.

    cout << " *p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    *p3 = 1;
    *(p3 + 1) = 2;
    *(p3 + 2) = 3;

    cout << "p3: " << endl;
    cout << *p3 << endl;
    cout << *(p3 + 1) << endl;
    cout << *(p3 + 2) << endl;

    *p3 = 10;

    cout << "Valor modificador: " << *p3 << endl;

    cout << *(p4 + 1) << endl; // Imprimindo o segundo caractere.

    //int vet2[4]; aloca espaço para objetos
    //int* pt;  Um ponteiro não consegue alocar espaço para objetos, mas para endereço.

    return 0;
}
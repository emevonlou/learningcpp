#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    /*
         Você pode modificar os ponteiros, 
         mas não pode modificar os inteiros
         para onde eles apontam.
    */

    const int vet[3] = {1,2,3};
    const int* p1;
    int const* p2;
    // int* const p3;

    p1 = &vet[0];
    p2 = &vet[1];

    

    return 0;
}
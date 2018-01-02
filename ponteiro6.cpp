// 36: de ponteiro para ponteiro
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int array[] = {1, 2, 3, 4, 5};
    int *parray = &array[4];
    int **pparray = &parray; // ponteiro que guarda o end do primeiro elemento do vetor

    cout << **pparray << endl;

    return 0;
}
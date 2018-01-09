// 120:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n1 = 10, n2 = 20, n3 = 30;
    int *parray[3] = {&n1, &n2, &n3}; // declarando array de 3 ponteiros para inteiros

    cout << *parray[0] << endl;
    cout << *parray[1] << endl;
    cout << *parray[2] << endl;

    return 0;
}
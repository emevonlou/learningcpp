// 35:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int array[] = {1, 2, 3, 4, 5};
    int *parray = &array[0];
    int i = 0;

    while (i < 5)
    {
        cout << *parray << endl;
        parray++;
        i++;
    }

    cout << *parray << endl;
    return 0;
}
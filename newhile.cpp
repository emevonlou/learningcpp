// 
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = 0;

    while (1) // enquanto for verdade
    {
        n++;
        if (n % 2 == 0) // se o numero for par
            continue;
        if (n > 100)
            break;
        cout << n << endl;
    }

    return 0;
}

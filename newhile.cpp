// 114:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = 0;

    while (1) // Enquanto for verdade faça.
    {
        n++;
        if (n % 2 == 0) // Se o numero for par faça.
            continue;
        if (n > 100)
            break;
        cout << n << endl;
    }

    return 0;
}

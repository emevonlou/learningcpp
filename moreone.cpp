#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;

    for (x = 1; x <= 5; x++)
    {
        if (x % 3 == 0 && x % 5 == 0 )
        {

           cout << x + 2 << " ";
        }
        else
        {
            cout << x + 1 << " ";
        }
    }

    return 0;
}
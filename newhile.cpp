#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = 1;

    while(1)
    {
        n++;
        if(n % 2 == 0)
             continue;
        if(n > 100)
            break;
        cout << n << endl;
    }

    return 0;
}

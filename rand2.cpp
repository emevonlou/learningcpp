#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << rand();

    for(int i = 0; i < 20; i++)
    {
        cout << rand() << endl;
    }

    return 0;
}
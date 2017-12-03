#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << rand();  

    for(int i = 0; i < 20; i++)
    {
        cout << rand() % 6 << endl;
    }

    return 0;
}
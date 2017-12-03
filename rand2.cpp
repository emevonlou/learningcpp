#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
    srand(time(0)); // conta os segundos no meu computador e gera um valor
    cout << rand();  

    for(int i = 0; i < 20; i++)
    {
        cout << (rand() % 6) + 1 << endl;
    }

    return 0;
}
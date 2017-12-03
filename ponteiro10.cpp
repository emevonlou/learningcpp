// passagem por valor
#include <iostream>
using namespace std;

void fun(int n)
{
    n = 20;
}

int main(int argc, char *argv[])
{
    int n = 10;

    fun(n);

    cout << n << endl;

    return 0;
}
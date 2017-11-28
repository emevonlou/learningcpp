#include <iostream>
using namespace std;

void fun()
{
    cout << "Essa eh uma funcao." << endl;
}

int fun(int num)
{
    cout << "Essa eh outra função" << endl;
}

int main(int argc, char *argv[])
{
    fun();
    fun(10);
    return 0;
}
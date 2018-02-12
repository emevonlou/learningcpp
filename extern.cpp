// 161: keyboard extern.
#include <iostream>
using namespace std;

int var = 10; // Variavel externa(Memoria alocada).

void print_var()
{
    cout << var << endl;
}

int main(int argc, char *argv[])
{
    print_var();

    return 0;
}

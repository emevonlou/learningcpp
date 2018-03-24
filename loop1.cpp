#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    char eme[] = {0x1b, '[', '1', ';', '3', '6', 'm', 0};
    cout << eme;

    string m = "Eu te amo Joaquim";
    int i;

    for(i = 1; i <= 100; i++)
    {
        cout << m << " ";
    }

    return 0;
}
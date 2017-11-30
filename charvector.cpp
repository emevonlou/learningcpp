#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char nome[] = {'E','M','E','V','O','N','L','O','U', '\0'};
    
    for(int i = 0; nome[i] != '\0'; i++)
    {
        cout << nome[i];
    }
    return 0;
}
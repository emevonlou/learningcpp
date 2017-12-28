// 63:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char nome[] = "Emanuelle Von Lou";

    for (int i = 0; nome[i] != '\0'; i++)
    {
        cout << nome[i];
    }
    return 0;
}
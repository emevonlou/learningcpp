#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    char color[] = {0x1b, '[', '1', ';', '3', '5', 'm', 0};
    cout << color;
    string eme = "Emanuelle von lou <3";
    int n = 1;

    while (n == 1)
    {
        cout << eme << " ";
    }
    return 0;
}
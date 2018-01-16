#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char *argv[])
{
    ifstream in("teste.txt");
    char c;

    while(true) // enquanto for verdade
    {
        in >> c; // operador de deslocamento a direita
        if(in.fail())
            break;
        cout << c;
    }
    return 0;
}
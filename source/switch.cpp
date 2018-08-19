// 185:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = 20;

    switch (n)
    {
    case 16:
        cout << "Numero 16";
        break;
    case 17:
        cout << "Numero 17";
    case 20:
        cout << "Numero 20";
        break;
    case 18:
        cout << "Numero 18";
        break;
    default:
        cout << "Numero nao encontrado";
        break;
    }
    return 0;
}
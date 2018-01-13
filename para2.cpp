// 49:
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    double x, y;

    cout << "Digite um numero: ";
    cin >> x;

    for (i = 0; i < 5; i++) // Iniciando de zero até 5, incremente.
    {
        cout << "Digite um numero: ";
        cin >> y;
        if (y > x)
        {
            x = y;
        }
    }
    cout << "Numero: " << x << "\n";

    system("PAUSE");
    return 0;
}
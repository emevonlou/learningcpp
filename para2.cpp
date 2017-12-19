#include <iostream>
using namespace std;

int main()
{
    int i;
    double x, y;

    cout << "Digite um numero: ";
    cin >> x;

    for (i = 0; i < 5; i++)
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
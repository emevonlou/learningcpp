#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    float num, soma;

    for(i = 1; i <= 7; i++)
    {
        cout << "Enter " << i << " number: ";
        cin >> i;
        soma += num;
    }
    cout << "\n Soma: " << soma << endl;
    cout << "\n\n";
    system("pause");
}
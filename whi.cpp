#include <iostream>
using namespace std;

int main()
 {
    int i = 0;
    double x, y = 0;
    cout << "Digite um numero: ";
    cin >> x;
    while (x != 0){
        i = i + 1;
        y = y + x;
        cout << "Digite um numero: ";
        cin >> x;
    }
    y = y / i;
    cout << "Numero: " << x << "\n";
    system("PAUSE");
    return 0;
}
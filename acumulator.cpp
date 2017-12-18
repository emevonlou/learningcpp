#include <iostream>
using namespace std;

int main()  // função inteira
{
    int x, y,z,w,k;
    float soma;

    cout << "Digite o primeiro numero: " << endl;
    cin >> x;
    cout << "Digite o segundo numero: " << endl;
    cin >> y;
    cout << "Digite o terceiro numero: " << endl;
    cin >> z;
    cout << "Digite o quarto numero: " << endl;
    cin >> w;
    cout << "Digite o quinto numero: " << endl;
    cin >> k;

    soma = x + y + z + w + k;

    cout << "Soma dos seus numeros: " << soma << endl;

    return 0;
}
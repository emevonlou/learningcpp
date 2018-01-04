// 5:
#include <iostream>
using namespace std;

int main() // Função inteira.
{
    int x, y, z, w, k;
    float soma;

    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;
    cout << "Digite o terceiro numero: ";
    cin >> z;
    cout << "Digite o quarto numero: ";
    cin >> w;
    cout << "Digite o quinto numero: ";
    cin >> k;

    soma = x + y + z + w + k;

    cout << "Soma dos seus numeros: " << soma << endl;

    return 0;
}
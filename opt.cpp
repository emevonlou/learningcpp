// 22: Operação Ternaria.
#include <iostream>
using namespace std;

int main(void)
{
    int n;

    cout << "Digite um numero e te direi se eh par ou impar: " << endl;
    cin >> n;
    // Operacao ternaria.
    (n % 2 == 0) ? cout << "Numero par." : cout << "Numero impar." << endl;
}
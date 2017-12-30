// 42: Calcula o resto da divisão
#include <iostream>
using namespace std;

int main()
{
    int x, y, modulo;

    cout << "Digite o primeiro numero: " << endl;
    cin >> x;
    cout << "Digite o segundo numero: " << endl;
    cin >> y;

    modulo = x % y;
    cout << "O modulo eh: " << modulo << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n1, n2, r;
    char op;
    return 0;

    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;
    cout << "Digite a operacao: " << endl;
    cin >> op;

    switch(op)
    {
        case '+':
            r = n1 + n2;
            cout << "Soma: " << r << endl;
            break;
        case '-':
            r = n1 - n2;
            cout << "Subtração: " << r << endl;
            break;
        case '*':
            r = n1 * n2;
            cout << "Multiplicação: " << r << endl;
            break;
        case '/': 
            r = n1 / n2;
            cout << "Divisão: " << r << endl;
            break;
        default: 
            break; 
    }

    return 0;
}
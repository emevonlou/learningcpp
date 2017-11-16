// hey!!Não confundir operador de atribuição '=' com operador de igualdade '=='
#include <iostream>
using namespace std;

int main()
{
    int n1,n2;

    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;

    if(n1 > n2)
    {
        cout << "O primeiro numero eh maior que o segundo!!" << endl;
    }
    else
    {
        cout << "O primeiro numero eh menor que o segundo!!" << endl;
    }
    if(n1 == n2)
    {
        cout << "O primeiro numero eh igual ao segundo!!" << endl;
    }
    else
    {
        cout << "O primeiro numero eh diferente do segundo!" << endl;
    }

    return 0;
}
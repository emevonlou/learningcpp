// 16:
#include <iostream>  // Entrada e saida de dados
#include <cstdlib>   // System
#include <cstring>   // Biblioteca de funções de manipulação com strings
using namespace std; // Declaração de espaço de nomes

int main()
{
    char x1[20], x2[20];

    cout << "Digite uma palavra: ";
    cin.getline(x1, 20);

    cout << "Digite outra palavra: ";
    cin.getline(x2, 20);

    if (x1 > x2)
    {
        cout << "\n"
             << x1 << "\t" << x2;
    }
    else
    {
        cout << "\n"
             << x2 << "\t" << x1;
    }
    cout << "\nx1:" << x1 << "\nx2: " << x2 << endl
         << endl;

    system("pause");
}
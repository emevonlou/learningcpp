#include <iostream>
using namespace std;

int main(void)
{
    cout << "digite os valores(negativo finaliza): ";
    float soma = 0;

    while(true) 
    {
        float valor;
        cin >> valor;
        if(valor < 0) break;
        soma += valor;
    }
    cout << "\n Soma: " << soma << endl;
}

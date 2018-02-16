// 167: queue->classe que implementa filas.
#include <iostream>
#include <queue>
using namespace std;


int main(int argc, char *argv[])
{
    queue<int> fila;

    // Inserindo na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);
    // fila: 10 20 30

    // Mostrando o ultimo elemento.
    cout << fila.back() << endl;

    if(fila.empty())
        cout << "Fila vazia\n";
    else
        cout << "Fila NAO vazia!\n";

    return 0;
}
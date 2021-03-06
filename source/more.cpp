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
    cout << "Ultimo elemento: " << fila.back() << endl;

    if (fila.empty())
        cout << "\nFila vazia\n";
    else
        cout << "\nFila NAO vazia!\n";

    cout << "Primeiro elemento: " << fila.front() << endl;

    cout << "Mostrando todos os elementos: ";
    while (!fila.empty())
    {
        int e = fila.front();
        cout << e << " ";
        fila.pop(); // Removendo o elemento do inicio.
    }

    // Inserindo novamente na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);

    cout << "Tamanho da fila: " << fila.size() << endl;

    cout << endl;

    return 0;
}
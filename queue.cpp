/*
    88:
    ------Queue(Fila)-----
    O primeiro elemento que entra é o primeiro que sai.
*/
#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char *argv[])
{
    queue<string> fila;

    fila.push("dog");
    fila.push("cat");
    fila.push("fish");

    fila.pop(); // remove sempre o primeiro elemento da fila

    cout << "Primeiro elemento: " << fila.front() << endl;
    cout << "Tamanho da fila: " << fila.size() << endl;
    cout << "Fila vazia?" << fila.empty() << endl;

    return 0;
}
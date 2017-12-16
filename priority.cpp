/*
    ----Queue_priority----
    O número maximo é de quem tem maior prioridade.
*/
#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char *argv[])
{
    priority_queue<int> fila; // Fila de prioridade

    fila.push(20);
    fila.push(10);
    fila.push(50);

    fila.pop(); // deleta o primeiro número maior e prevalece o segundo

    cout << fila.top() << endl;
    cout << "Tamanho: " << fila.size() << endl;

    return 0;
}
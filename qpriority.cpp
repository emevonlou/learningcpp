/*
     168: Classe queue priority(Fila de prioridades).
     queue- FIFO- first in, first out.
*/
#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char *argv[])
{
    priority_queue<int> pq;

    pq.push(70); // Inserindo elementos.
    pq.push(100);
    pq.push(50);

    cout << "Elemento do topo: " <<  pq.top() << endl;
    // Verificando o elemento de maior prioridade(valor).

    if (pq.empty())
        cout << "\nA fila esta vazia!";
    else
        cout << "\nA fila NAO esta vazia!";

    cout << "Mostrando os elementos: " << endl;
    while(!pq.empty())
    {
        cout << pq.top() << " "; // imprimindo o elemento do topo.
        pq.pop();   // Retirando o elemento.
    }

    return 0;
}
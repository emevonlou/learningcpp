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
    // priority_queue<int, vector<int>, greater<int> > pq;
    // Inverte a prioridade

    pq.push(20); // Inserindo elementos.
    pq.push(15);
    pq.push(50);

    cout << "Elemento do topo: " << pq.top() << endl;
    // Verificando o elemento de maior prioridade(valor).

    if (pq.empty())
        cout << "\nA fila esta vazia!";
    else
        cout << "\nA fila NAO esta vazia!";

    cout << "\nTamanho da fila: " << pq.size() << endl;

    cout << "\nMostrando os elementos: " << endl;
    while (!pq.empty())
    {
        cout << pq.top() << " "; // imprimindo o elemento do topo.
        pq.pop();                // Retirando o elemento.
    }

    cout << endl;

    return 0;
}
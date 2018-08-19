/* 
    87:
  -----Container Stack(Pilha)------
    O primeiro elemento a entrar é o último a sair.
*/

#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[])
{
    stack<double> pilha;

    pilha.push(3.14);
    pilha.push(5.123);
    pilha.push(10.56);

    cout << "Topo: " << pilha.top() << endl;
    cout << "Tamanho: " << pilha.size() << endl;

    if (pilha.empty())
        cout << "Pilha vazia." << endl;
    else
        cout << "Pilha não vazia." << endl;

    return 0;
}
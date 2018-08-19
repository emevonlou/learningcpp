/*
    108:
    -----deque----
    Fila de duas extremidades.
    Se pode adicionar elementos tanto no
    inicio como no final.
*/
#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char *argv[])
{
    deque<int> fila;

    fila.push_front(10);    
    fila.push_back(15);
    fila.push_front(20);

    fila.pop_front(); // irá remover o '20'

    cout << "Primeiro elemento: " << fila.at(0) << endl;
    cout << "ultimo elemento: " << fila.back() << endl;

    return 0;
}
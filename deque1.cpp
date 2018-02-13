/* 
    deque:
    Uma fila mais flexivel onde podemos inserir 
    e remover tanto no inicio como no final
    Classe que já vem com estrutura implementada
    com diversas funcoes pra utilizar otimizando o 
    desenvolvimento.
*/
#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char *argv[])
{
    deque<int> fila;

    cout << "Antes de inserir os elementos: ";

    if (fila.empty())
        cout << "Fila vazia!!\n";
    else
        cout << "Fila NAO vazia!!\n";

    // Inserir elementos ao final da fila.
    fila.push_back(10);
    fila.push_back(20);
    // Inserir elemento no inicio da fila
    fila.push_front(30); 
    // Fila: 30 10 20

    cout << "\nDepois de inserir os elementos:\n"; 

    

    return 0;
}
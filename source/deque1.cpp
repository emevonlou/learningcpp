/*
    165:
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

    if (fila.empty())
        cout << "Fila vazia!!\n";
    else
        cout << "Fila NAO vazia!!\n";

    cout << "\nMostrando os elementos da fila: ";

    deque<int>::iterator it = fila.begin();
    while (it != fila.end())  // Enquanto não chegar ao final da fila
        cout << *it++ << " "; // Incrementando o iterador pra apontar pro prox elem da fila.
    cout << "\n";

    // Limpar toda a fila
    fila.clear();

    cout << "\nDepois de limpar(clear) a fila: ";

    if (fila.empty())
        cout << "Fila vazia!!\n";
    else
        cout << "Fila NAO vazia!!\n";

    // Inserindo elementos novamente.
    fila.push_front(10);
    fila.push_front(20);
    fila.push_back(30);
    // Fila: 20 10 30

    // Removendo o segundo elemento
    fila.erase(fila.begin() + 1);

    cout << "\nMostrando os elementos da fila: ";
    it = fila.begin();
    while (it != fila.end())
        cout << *it++ << " ";
    cout << "\n";

    cout << "\n\nElemento da frente: " << fila.front();
    cout << "\n\nUltimo elemento: " << fila.back();

    it = fila.begin() + 1;
    fila.insert(it, 10);

    cout << "\n\nMostrando os elementos: ";

    it = fila.begin();
    while (it != fila.end())
        cout << *it++ << " ";

    // remover elementos do inicio
    fila.pop_front();
    // remover elementos do final
    fila.pop_back();

    cout << "\n\nTamanho da fila: " << fila.size() << endl;

    return 0;
}
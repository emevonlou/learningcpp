/*
    171:
    Classe stack:
    Classe que utiliza e implementa uma pilha.
    Pilha - LIFO(last in first out)
    O último elemento a entrar é o primeiro a sair.
    Operações de adicionar são chamadas de push.
    Operações de remover são chamadas de pop.
    As inserções e remoções são sempre no topo da pilha.
*/
#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[])
{
    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);

    return 0;
}
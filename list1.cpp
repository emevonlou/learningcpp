/* 
    150:
    Listas:
    * A list não prealoca espaços na memoria para elementos futuros.
    * Cada elemento requer espaco extra para o no que detem o elemnto.
      (incluindo ponteiros que apontam p elemento/seguinte e anterior)
    * Você nao pode acessar aleatoriamente os elementos.
*/
#include <iostream>
#include <list>
using namespace std;

int main(int argc, char *argv[])
{
    list<int> l1;        // Lista de inteiros vazia.
    list<int> l2(3, 10); // Trẽs inteiros com o valor 10.
    list<int>::iterator it;

    // Inserindo elementos em l1 - push_back e push_front.
    l1.push_back(10);  // l1:10
    l1.push_front(20); // l1: 20, 10
    l1.push_back(30);  // l1: 20, 10, 30

    cout << "Mostrando os elementos de l1: " << endl;

    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "Mostrando os elementos de l2: " << endl;
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    // Acessando o primeiro e e ultimo elemento de l1- front e back
    cout << "Primeiro elemento de l1: " << l1.front();
    cout << "\nUltimo elemento de l1: " << l1.back();

    // Tamanho de l1
    cout << "\nTamanho de l1: " << l1.size();

    // l1: 20,10, 30
    // removendo o primeiro elemento de l1
    l1.pop_front(); // remove o 20.
    // removendo o ultimo eleemento de l1
    l1.pop_back(); // remove o 30

    cout << "\nMostrando novamente os elementos de l1: " << endl;

    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
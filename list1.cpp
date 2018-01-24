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
    list<int> l1; // Lista de inteiros vazia.
    list<int> l2(3,10); // Trẽs inteiros com o valor 10. 
    list<int>::iterator it;

    // Inserindo elementos em l1 - push_back e push_front.
    l1.push_back(10); // l1:10
    l1.push_front(20); // l1: 20, 10
    l1.push_back(30); // l1: 20, 10, 30 

    cout << "Mostrando os elementos de l1: " << endl;

    return 0;
}
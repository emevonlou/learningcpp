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
    l1.push_back(10);  // l1:10.
    l1.push_front(20); // l1: 20, 10.
    l1.push_back(30);  // l1: 20, 10, 30.

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

    // Acessando o primeiro e e ultimo elemento de l1- front e back.
    cout << "Primeiro elemento de l1: " << l1.front();
    cout << "\nUltimo elemento de l1: " << l1.back();

    // Tamanho de l1.
    cout << "\nTamanho de l1: " << l1.size();

    // l1: 20,10, 30.
    // removendo o primeiro elemento de l1.
    l1.pop_front(); // remove o 20.
    // removendo o ultimo eleemento de l1.
    l1.pop_back(); // remove o 30.

    cout << "\nMostrando novamente os elementos de l1: " << endl;

    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << endl;
    }

    // Removendo todos os elementos de l2.
    while (!l2.empty())
        l2.pop_front();

    cout << "Novo tamanho de l2: " << l2.size() << endl;

    // Atribuindo elementos a l2.
    int vet[] = {1, 2, 3, 4};
    l2.assign(vet, vet + 4);

    cout << "Mostrando novos elementos de l2: " << endl;
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    // Inserindo um elemento em l2.
    l2.insert(l2.begin(), 100);
    cout << "Mostrando novamente os elementos de l2: " << endl;

    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    it = l2.begin();
    it++; // Aponta para o segundo elemento
    l2.insert(it, 200);

    cout << "Mostrando elementos de l2: " << endl;
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    // Inserindo duas vezes o valor 50 na primeira posicao
    l2.insert(l2.begin(), 2, 50);
    cout << "\nElementos de l2: " << endl;
    for (it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    // apagando os dois primeiros numeros
    list<int>::iterator it2 = l2.begin();
    it2++;
    it2++;
    l2.erase(l2.begin(), it2);

    // Mostrando novamente os elementos de l2
    cout << "\nElementos de l2: " << endl;
    for (it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    // remover todods os elementos - funcao clear
    l2.clear();
    cout << "\nTamanho de l2: " << l2.size() << endl;

    // funcao splice - transfere elementos de uma lista pra outra
    list<int> lista1(2,10), lista2(2, 20);
    it = lista1.begin();

    // Transfere elementos de lista2 para lista1
    lista1.splice(it, lista2);
    for (it = lista1.begin(); it != lista1.end(); it++)
        cout << *it << endl;

    cout << "\nTamanho de lista2: " << l2.size() << endl;

    // remover todos os elementos iguais a um valor
    // funcao remove
    





    return 0;
}
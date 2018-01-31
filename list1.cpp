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

bool par(const int & n)
{
    return(n%2 == 0);
}

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

    // Acessando o primeiro e e ultimo elemento de l1 - front e back.
    cout << "Primeiro elemento de l1: " << l1.front();
    cout << "\nUltimo elemento de l1: " << l1.back();

    // Tamanho de l1.
    cout << "\nTamanho de l1: " << l1.size();

    // l1: 20,10, 30.
    // removendo o primeiro elemento de l1.
    l1.pop_front(); // Remove o 20.
    // Removendo o ultimo eleemento de l1.
    l1.pop_back(); // Remove o 30.

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
    it++; // Aponta para o segundo elemento.
    l2.insert(it, 200);

    cout << "Mostrando elementos de l2: " << endl;
    for (it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << endl;
    }

    // Inserindo duas vezes o valor 50 na primeira posicao.
    l2.insert(l2.begin(), 2, 50);
    cout << "\nElementos de l2: " << endl;
    for (it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    // Apagando os dois primeiros numeros.
    list<int>::iterator it2 = l2.begin();
    it2++;
    it2++;
    l2.erase(l2.begin(), it2);

    // Mostrando novamente os elementos de l2.
    cout << "\nElementos de l2: " << endl;
    for (it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    // Remover todods os elementos - funcao clear().
    l2.clear();
    cout << "\nTamanho de l2: " << l2.size() << endl;

    // Funcao splice - transfere elementos de uma lista pra outra.
    list<int> lista1(2, 10), lista2(2, 20);
    it = lista1.begin();

    // Transfere elementos de lista2 para lista1.
    lista1.splice(it, lista2);
    for (it = lista1.begin(); it != lista1.end(); it++)
        cout << *it << endl;

    cout << "\nTamanho de lista2: " << l2.size() << endl;

    // Remover todos os elementos iguais a um valor.
    // Funcao remove.
    lista1.remove(20);
    cout << "\nElementos de lista 1 sem o valor 20: " << endl;
    for (it = lista1.begin(); it != lista1.end(); it++)
        cout << *it << endl;

    // Funcao remove_if.
    // Remove se ocorrer determinada condicao.
    int vet2[] = {6, 8, 10, 5, 20, 21};
    list<int> lista3(vet2, vet2 + 6);
    cout << "\nElementos da lista3 antes da remocao:\n" << endl;
    for (it = lista3.begin(); it != lista3.end(); it++)
        cout << *it << " ";

    // Removendo todos os elementos pares de lista 3.
    lista3.remove_if(par);

    cout << "\n\nElementos da lista3 depois da remocao:\n" << endl;
    for (it = lista3.begin(); it != lista3.end(); it++)
        cout << *it << " ";
    cout << endl;

    // Ordenacao de listas
    int vet3[] = {17, 60, 5, 30, 50};
    list<int> lista4(vet3, vet3 + 5);
    lista4.sort(); // Ordena crescentemente.
    cout << "\n\nElementos da lista3 depois da remocao:\n" << endl;
    for (it = lista4.begin(); it != lista4.end(); it++)
        cout << *it << endl;

    // Ordenando strings.
    list<string> lista5;
    list<string>::iterator it5;
    lista5.push_back("python");
    lista5.push_back("C++");
    lista5.push_back("Ruby");
    lista5.push_back("haskell");
    lista5.sort();
    




    return 0;
}
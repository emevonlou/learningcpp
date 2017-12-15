#include <iostream>
#include <vector> //classe vector
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v;

    v.push_back(10);
    v.push_back(12);
    v.push_back(20);
    v.push_back(30);
    // v.pop_back(); Deletar o ultimo elemento

    for(unsigned int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    if(v.empty()) // verificando se o vetor está vazio
        cout << "Vetor vazio." << endl;
    else
        cout << "Vetor nao vazio." << endl;

    cout << "Elemento da segunda posicao: " << v.at(1) << endl;  //Saber um determinado elemento do vetor 
    cout << "Primeiro elemento: " << v.front() << endl; //verificar qual é o primeiro elemento
    cout << "Ultimo elemento: " << v.back() << endl; // verificar qual foi o ultimo elemento

    return 0;
}
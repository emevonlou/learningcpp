// 154:
// Na fila, o primeiro elemnto a entrar é o primeiro a sair.
// Implementamos filas usando templates.
#include <iostream>
#include <list>
using namespace std;

// Com a mesma funcao eu realizo duas operacoes,
// com tipos diferentes.
template<class T> 
class fila
{

};

int main(int argc, char *argv[])
{
    cout << "Soma de inteiros: " << soma(10,20) << endl;
    cout << "Soma de reais: " << soma(1.5, 3.5) << endl;

    return 0;
}
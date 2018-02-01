// 154:
#include <iostream>
using namespace std;

// Com a mesma funcao eu realizo duas operacoes
// com tipos diferentes
template<typename T> T soma(T n1, T n2)
{
    return n1 + n2;
}

int main(int argc, char *argv[])
{
    cout << "Soma de inteiros: " << soma(10,20) << endl;
    cout << "Soma de reais: " << soma(1.5, 3.5) << endl;

    return 0;
}
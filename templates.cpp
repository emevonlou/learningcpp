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
private:
    list<T> fila;
public:
    void inserir(const T& e)
    {
        fila.push_back(e);
    }
    bool vazia()
    {
        return fila.empty();
    }
    T remover()
    {
        if(!this->vazia())
        {
            T e = fila.front();
            fila.pop_front();
        }
    }
};

int main(int argc, char *argv[])
{
    

    return 0;
}
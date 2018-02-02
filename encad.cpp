#include <iostream>
using namespace std;

class No
{
private:
    int v;
    No* prox; // referencia para o proximo 'No'
public:
    No(int v)
    {
        this->v = v;
        this->prox = NULL;
    }

    int obterValor()
    {
        return v;
    }

    No* obterProx()
    {
        return prox;
    }

};

int main(int argc, char *argv[])
{
    return 0;
}
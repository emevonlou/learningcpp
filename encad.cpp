// 155:
#include <iostream>
using namespace std;

class No
{
  private:
    int v;
    No *prox; // referencia para o proximo 'No'
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

    No *obterProx()
    {
        return prox;
    }

    void setProx(No *p)
    {
        prox = p;
    }
};

class Lista
{
  private:
    No *cabeca; // primeiro elemento da lista.
    No *cauda;  // Ultimo elemento. Resto da lista.
  public:
    Lista()
    {
        cabeca = NULL;
        cauda = NULL;
    }
    Lista(int v)
    {
        cabeca = new No(v);
        cauda = cabeca;
    }

    virtual ~Lista()
    {
        delete cabeca;
    }

    void mostrar()
    {
        cout << "Imprimindo todos os elementos..." << endl;
        No *c = cabeca;

        if (vazia())
            cout << "A lista nao possui elementos!" << endl;
        else
        {
            while (c)
            {
                cout << c->obterValor() << endl;
                c = c->obterProx(); // obter o prox No
            }
        }
    }

    bool vazia()
    {
        return (cabeca == NULL);
    }
};

int main(int argc, char *argv[])
{

    return 0;
}
// 155:
#include <iostream>
using namespace std;

class No
{
  private:
    int v;
    No *prox; // Referencia para o proximo 'No'.
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
    No *cabeca; // Primeiro elemento da lista.
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
                c = c->obterProx(); // Obter o prox No.
            }
            cout << endl;
        }
    }

    bool vazia()
    {
        return (cabeca == NULL);
    }

    void inserir_inicio(int v)
    {
        No* novo_no = new No(v);

        novo_no->setProx(cabeca);
        cabeca = novo_no;
    }

    void inserir_final(int v)
    {
        No* novo_no = new No(v);

        if(vazia())
        {
            cabeca = novo_no;
            cauda = novo_no;
        }
        else
        {
            cauda->setProx(novo_no);
            cauda = novo_no;
        }
    }

    int tamanho()
    {
        if(vazia())
            return 0;
        
        No* c = cabeca;
        int tam = 0;

        do
        {
            c =c->obterProx();
            tam++;
        }
        while(c);
    }

    bool existe(int v)
    {
        No* c = cabeca;
        while(c)
        {
            if(c->obterValor() == v)
                return true;
            c = c->obterProx();
        }
    }
    
};

int main(int argc, char *argv[])
{

    return 0;
}
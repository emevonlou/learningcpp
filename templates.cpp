// 154:
// Na fila, o primeiro elemnto a entrar é o primeiro a sair.
// Implementamos filas usando templates.
#include <iostream>
#include <list>
using namespace std;

// Com a mesma funcao eu realizo duas operacoes,
// com tipos diferentes.
template <class T>
class fila
{
  private:
    list<T> fila;

  public:
    void inserir(const T &e)
    {
        fila.push_back(e);
    }
    bool vazia()
    {
        return fila.empty();
    }
    T remover()
    {
        if (!this->vazia())
        {
            T e = fila.front();
            fila.pop_front();
            return e;
        }
        throw "Fila vazia!!";
    }

    T frente()
    {
        if (!this->vazia())
            return fila.front();
        throw "Fila vazia!!!";
    }

    // Funcao para retornar o ultimo elemento da fila.
    T final()
    {
        if (!this->vazia())
            return fila.back();
        throw "Fila Vazia!!!";
    }

    // Funcao pra retornar o tamanho da minha fila.
    int tamanho()
    {
        return fila.size();
    }
};

int main(int argc, char *argv[])
{
    fila<double> f1;
    cout << "Antes de inserrir elementos: \n";
    if (f1.vazia())
        cout << "Fila vazia!!\n;";
    else
        cout << "Fila nao vazia!\n";

    try
    {
        double e = f1.remover();
        cout << "Removido o elemento: " << e << endl;
    }
    catch (const char *msg)
    {
        cerr << "Erro: " << msg << endl;
    }

    f1.inserir(5.67);
    f1.inserir(5.67);
    f1.inserir(5.67);

    cout << "\nDEPOIS de inserir elementos...\n";

    if (f1.vazia())
        cout << "Fila vazia!!\n;";
    else
        cout << "Fila nao vazia!\n";

    try
    {
        cout << "Elemento da frente: " << f1.frente() << endl;
    }
    catch(const char *msg)
    {
        cerr << "erro: " << msg << endl;
    }

     try
    {
        cout << "Elemento do Final: " << f1.final() << endl;
    }
    catch(const char *msg)
    {
        cerr << "erro: " << msg << endl;
    }

    try
    {
        
    }
    catch(const char *msg)
    {
        cerr << "erro: " << msg << endl;
    }

    return 0;
}
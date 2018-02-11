// 164: Sobrecarregando o operador de indice: []
#include <iostream>
#include <stdlib.h> // função exit();
using namespace std;

class Vetor
{
  private:
    int *vet;
    int max;

  public:
    Vetor(int max)
    {
        if (max < 0)
        {
            cerr << "Erro: Limite maximo menor que 0." << endl;
            exit(1);
        }
        else if (max > 1000000)
        {
            cerr << "Erro: Limite maximo maior do que 1000000." << endl;
            exit(1);
        }

        this->max = max;

        // Alocar espaço.
        vet = (int *)malloc(max * sizeof(int));
    }

    ~Vetor()
    {
        delete[] vet;
    }

    bool inserir(int e, int pos)
    {
        if (pos < max && pos >= 0)
        {
            vet[pos] = e;
            return true;
        }
        return false;
    }

    int &operator[](int i)
    {
        if (i < 0 || i >= max)
        {
            cerr << "Erro: Acesso invalido ao vetor!" << endl;
            exit(1);
        }
        return vet[i];
    }
};

int main(int argc, char *argv[])
{
    Vetor v(10);

    if (v.inserir(10, 0))
    {
        cout << "Elemento inserido com sucesso.\n";
    }
    else
        cout << "Erro ao inserir o elemento\n";

    if (v.inserir(11, 2))
    {
        cout << "Elemento inserido com sucesso.\n";
    }
    else
        cout << "Erro ao inserir o elemento\n";

    if (v.inserir(12, 10))
    {
        cout << "Elemento inserido com sucesso.\n";
    }
    else
        cout << "Erro ao inserir o elemento\n";

    cout << "Primeiro eleemento: " << v[0] << endl;
    cout << "Terceiro elemento: " << v[2] << endl;
    cout << "Trigesimo elemento: " << v[30] << endl;

    return 0;
}
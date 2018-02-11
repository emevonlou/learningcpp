// 164: Sobrecarregando o operador de indice: []
#include <iostream>
#include <stdlib.h> // função exit();
using namespace std;

class Vetor
{
  private:
    int *vet, *vet_pos;
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
        vet_pos = (int*)malloc(max * sizeof(int));

        for(int i = 0; i < max; i++)
        {
            vet_pos[i] = 0;
        }
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
            vet_pos[pos] = 1;
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
        else if(vet_pos[i] == 0)
        {
            cerr << "Erro: Nessa posicao nao existe elemento" << endl;
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
    cout << "Segundo elemento: " << v[1] << endl;

    return 0;
}

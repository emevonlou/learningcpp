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
        if(max <0)
        {
            cerr << "Erro: Limite maximo menor que 0." << endl;
            exit(1);
        }
        else if(max > 1000000)
        {
            cerr << "Erro: Limite maximo maior do que 1000000." << endl;
            exit(1);
        }

        this->max = max;

        // Alocar espaço.
        vet = (int*)malloc(max * sizeof(int));
    }

    ~Vetor()
    {
        delete[] vet;
    }
};

int main(int argc, char *argv[])
{
    
    return 0;
}

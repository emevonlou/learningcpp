// 164: Sobrecarregando o operador de indice: []
#include <iostream>
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

        }
    }
};

int main(int argc, char *argv[])
{
    
    return 0;
}

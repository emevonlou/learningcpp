#include <iostream>
using namespace std;

class No
{
private:
    No *esq, *dir;
    int chave;

public:
    No(int chave)
    {
        this->chave = chave;
        esq = NULL;
        dir = NULL;
    }

    int getChave()
    {
        return chave;
    }

    No* getEsq()
    {
        return esq;
    }

    No* getDir()
    {
        return dir;
    }

    
};

int main(int argc, char *argv[])
{

    return 0;
}
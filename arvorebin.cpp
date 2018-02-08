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

    void setEsq(No* no)
    {
        esq = no;
    }

    void setDir(No* no)
    {
        dir = no;
    }
};

class Arvore
{
private:
    No* raiz;

public:
    Arvore()
    {
        raiz = NULL;
    }

};

int main(int argc, char *argv[])
{

    return 0;
}
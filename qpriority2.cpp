// 169: queue com classe.
#include <iostream>
#include <queue>
using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;

public:
     Pessoa(string nome, int idade)
    {
        this->nome = nome;
        this->idade = idade;
    }
};

struct CompIdade
{
    bool operator()(Pessoa const & p1, Pessoa const & p2)
    {
       // return p1.idade < p2.idade;
    }
};


int main(int argc, char *argv[])
{
    priority_queue<Pessoa, vector<Pessoa>, CompIdade> pq;

    Pessoa p1();

    return 0;
}
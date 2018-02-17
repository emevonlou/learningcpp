// 169: queue com classe.
#include <iostream>
#include <queue>
using namespace std;

class Pessoa
{
public:
    int idade;
};

struct CompIdade
{
    bool operator()(Pessoa const & p1, Pessoa const & p2)
    {
        return p1.idade < p2.idade;
    }
};


int main(int argc, char *argv[])
{
    priority_queue<Pessoa, vector<Pessoa>, CompIdade > pq;

    return 0;
}
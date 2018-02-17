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

    string getNome()
    {
        return nome;
    }

    int getIdade()
    {
        return idade;
    }
};

struct CompIdade
{
    bool operator()(Pessoa& p1, Pessoa& p2)
    {
       return p1.getIdade() < p2.getIdade();
    }
};


int main(int argc, char *argv[])
{
    priority_queue<Pessoa, vector<Pessoa>, CompIdade> pq;

    Pessoa p1("João", 20), p2("Emanuelle", 38), p3("Joaquim",7);

    pq.push(p1);
    pq.push(p2);
    pq.push(p3);

    // Verificando qual é o elemento do topo.
    Pessoa p_topo = pq.top();

    

    return 0;
}
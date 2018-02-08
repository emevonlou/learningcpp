#include <iostream>
using namespace std;

typedef struct Pessoa
{
    struct Carro
    {
        double preco;
    };

    struct Casa
    {
        double preco;
    };

    struct Carro carro;
    struct Casa casa;

}t_pessoa;

int main(int argc, char *argv[])
{
    t_pessoa pessoa;

    return 0;
}
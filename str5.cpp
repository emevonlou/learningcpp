#include <iostream>
using namespace std;

struct pessoa
{
    int idade;

    void setIdade(int idade)
    {
        this->idade = idade;
    }
    int getIdade()
    {
        return this->idade;
    }
};

int main(int argc, char *argv[])
{
    pessoa p;

    p.setIdade(20);
    cout << p.getIdade() << endl;

    return 0;
}
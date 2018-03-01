// 180: Implementação do TAD Pilha(stack)
#include <iostream>
using namespace std;

class Pilha
{
private:   
    int * vet;   // Ponteiro que é meu vetor(vet).
    int max_tam;  // O máximo do tamanho da minha pilha.
    int topo;     // Variável que marca o topo da minha pilha.
public:
    Pilha()   // Construtor(Terá o mesmo nome da classe).
    {
        vet = new int[100];   // Alocando espaço para 100 inteiros.
        max_tam = 99;
    }
};

int main(int argc, char *argv[])
{
    return 0;
}
// 180: Implementação do TAD Pilha(stack)
#include <iostream>
using namespace std;

class Pilha
{
  private:
    int *vet;    // Ponteiro que é meu vetor(vet).
    int max_tam; // O máximo do tamanho da minha pilha.
    int topo;    // Variável que marca o topo da minha pilha.
  public:
    Pilha() // Construtor(Terá o mesmo nome da classe).
    {
        vet = new int[100]; // Alocando espaço para 100 inteiros.
        max_tam = 99;
        topo = -1;
    }
    ~Pilha()
    {
        delete[] vet;
    }
    void empilhar(int e)   // Para empilhar vc deve passar um elemento(no caso 0 'e').
    {
        if(topo == max_tam)
        {
            cout << "Pilha cheia!" << endl;
        }
        else
        {
            // ++topo = 0(onde começa o vetor.)
            vet[++topo] = e;
        }
    }
    void desempilhar()   // Não precisa passar elemento pq sempre retira do topo.
    {
        if(topo == -1)
        {
            cout << "Pilha vazia!" << endl;
        }
        else
        {
            topo--;
        }
    }
};

int main(int argc, char *argv[])
{
    return 0;
}
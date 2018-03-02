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
    void empilhar(int e) // Para empilhar vc deve passar um elemento(no caso 0 'e').
    {
        if (topo == max_tam)
        {
            cout << "Pilha cheia!" << endl;
        }
        else
        {
            // ++topo = 0(onde começa o vetor.)
            vet[++topo] = e;
        }
    }
    void desempilhar() // Não precisa passar elemento pq sempre retira do topo.
    {
        if (topo == -1)
        {
            cout << "Pilha vazia!" << endl;
        }
        else
        {
            topo--;
        }
    }
    int getTopo()
    {
        if (topo != -1)
            // Retorna o elemento do vetor que pode ser acessado pela variável topo.
            return vet[topo];
        return -1;
    }
    int vazio() // Verificando se a pilha está vazia.
    {
        return (topo == -1); // Se o topo for igual a -1 vai retornar 1
        // 1 é true, então a pilha vai estar vazia.
    }
};

int main(int argc, char *argv[])
{
    Pilha p;

    p.empilhar(10);
    p.empilhar(11);
    p.empilhar(12); // O último elemento inserido ficará no topo.

    cout << "Pilha vazia: " << p.vazio() << endl;
    cout << "Topo: " << p.getTopo() << endl;

    // p.desempilhar();
    return 0;
}
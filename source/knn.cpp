#include <iostream>
#include <vector>
#include <math.h> // Calcular a distância euclidiana
#include <set>
#include <map>
using namespace std;

class Individuo
{
  private:
    string classe;
    double a, b, c, d;

  public:
    // Construtor.
    Individuo(double a, double b, double c, double d, string classe)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = c;
        this->classe = classe;
    }

    //Métodos para acessar membros privados.
    string getClasse()
    {
        return classe;
    }

    double getA()
    {
        return a;
    }

    double getB()
    {
        return b;
    }

    double getC()
    {
        return c;
    }

    double getD()
    {
        return d;
    }
};

// Calculando a distância euclidiana.
double distEuclidiana(Individuo ind1, Individuo ind2)
{
    double soma = pow((ind1.getA() - ind2.getA()), 2) +
                  pow((ind1.getB() - ind2.getB()), 2) +
                  pow((ind1.getC() - ind2.getC()), 2) +
                  pow((ind1.getD() - ind2.getD()), 2);

    return sqrt(soma);
}

// Função para classificar amostra.
string classAmostra(vector<Individuo> &individuos,
                    Individuo novo_exemplo, int K)
{
    // Se o K for par, decrementa.
    if (K % 2 == 0)
    {
        K--;
        if (K <= 0)
            K = 1;
    }

    int tam_vet = individuos.size();

    set<pair<double, int> > dist_individuos;

    for(int i = 0; i < tam_vet; i++)
    {
        double dist = distEuclidiana(individuos[i], novo_exemplo);
        dist_individuos.insert(make_pair(dist, i));
    }

    set<pair<double, int> >::iterator it;

    vector<int> cont_classes(3);

    int contK = 0;

    for(it = dist_individuos.begin(); it != dist_individuos.end(); it++)
    {
        string classe = individuos[it->second].getClasse();
        if(classe == "Iris-setosa")
            cont_classes[0]++;
        else if(classe == "Iris-versicolor")
            cont_classes[1]++;
        else 
            cont_classes[2]++;
    }

}

int main(int argc, char *argv[])
{

    return 0;
}
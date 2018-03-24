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

// Calculando a distância euclidiana
//double distEuclidiana()

int main(int argc, char *argv[])
{

    return 0;
}
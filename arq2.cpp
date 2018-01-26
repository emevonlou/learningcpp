// 131:
#include <iostream> // Serve pra executar o fluxo de 'io'(Entrada e saida).
using namespace std;

int main(int argc, char *argv[])
{
    /*
        O ponto de entrada de cada programa C ++ é main ()
        independente do que o programa faz.
    */
    int num;

    cout << "Digite um numero: " << endl;
    cin >> num;

    cout << "Voce digitou " << num << endl;

    return 0;
}
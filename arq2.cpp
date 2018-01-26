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
    /*
        Na maioria dos ambientes de programa,
        o destino de saída padrão padrão é a tela. Em C ++,
        cout é o objeto de fluxo usado para acessá-lo.
    */

    return 0;
}
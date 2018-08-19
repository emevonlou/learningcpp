// 84:
#include <iostream>
using namespace std;

int fat(int n) //implementando a função fat() recursiva
{
    if (n < 0) // Se passar um numero negativo, lançamos uma exceção com throw
        throw "Numero negativo\n";
    if (n == 0 || n == 1)
        return 1; // Retorna 1 porque a fat de zero e um é 1
    return n * fat(n - 1);
}

int main(int argc, char *argv[])
{
    try //Tente
    {
        cout << "Fatorial de 5: " << fat(5) << endl;
    }
    catch (const char *e) //captura exceção com 'cath'
    {
        cerr << "Erro: " << e << endl; //imprimindo erro com 'cerr'
    }
    catch (...) // Caso o erro for desconhecido
    {
        cerr << "Erro inesperado" << endl;
    }
    return 0;
}
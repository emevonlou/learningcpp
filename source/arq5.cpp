// 134:
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream in("teste.txt");
    char c;

    while (true) // Enquanto for verdade, faça:
    {
        in >> c;       // Operador de deslocamento a direita.
        if (in.fail()) // Função pra testar se tem algum caractere pra ser lido.
            break;     // Se não tiver nenhum caractere pra ser lido,vai dar um um break.
        cout << c;
    }
    return 0;
}
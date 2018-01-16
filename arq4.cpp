// Abrir um arquivo para a saida.(Escrever no arquivo)
// 133:
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ofstream output("saida.txt");
    output << "Aprendendo c++" << endl;
    output << "Emanuelle Von Lou!" << endl;

    return 0;
}
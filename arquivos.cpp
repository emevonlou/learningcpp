#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    /*
    ofstream output("saida.txt"); // gravar algo na saída

    output << "aprendendo c++" << endl;
    * não imprime nada no terminal.
    */

    ifstream in("saida.txt"); // Lê o conteúdo de "saída.txt"

    char c = in.get();  // pegando o primeiro caractere
    string texto;

    texto.push_back(c);// adicionando o caractere no texto com push_back

    while(in.good())  // Enquanto eu puder ler
    {
        c = in.get();
        texto.push_back(c); 
    }

    cout << texto << endl;


    return 0;
}
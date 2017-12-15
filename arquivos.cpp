#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    /*
    ofstream output("saida.txt"); // pra gravar algo na saída

    output << "aprendendo c++" << endl;
    * não imprime nada no terminal mas o arquivo vai estar em 'allfiles'
    */

    ifstream in("saida.txt");

    char c = in.get();
    string texto;

    texto.push_back(c);

    while(in.good())
    {
        c = in.get();
        texto.push_back(c);
    }

    cout << texto << endl;

    
    return 0;
}
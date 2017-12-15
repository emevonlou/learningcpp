#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ofstream output("saida.txt");

    output << "aprendendo c++" << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string str = "Emanuelle Von Lou";

    cout << "String: " << str << endl;
    cout << "Tamanho: " << str.size() << endl;
    cout << "Tamanho: " << str.length() << endl;
    // Passando uma posição para a função retornar o caractere que pode ser acessado atraves do numero.
    cout << str.at(1) << endl;

    return 0;
}
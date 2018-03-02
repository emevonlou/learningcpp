#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string str = "Emanuelle";

    cout << "String: " << str << endl;
    cout << "Tamanho: " << str.size() << endl;
    cout << "Tamanho: " << str.length() << endl;
    // Passando uma posição para a função retornar o caractere que pode ser acessado atraves do numero.
    cout << "Acesso pelo indice 1: " << str.at(1) << endl;
    // Função Para obter o ultimo caractere de uma string
    // Disponivel para o c++11
    // cout << str.back() << endl;
    // Função para obter o primeiro caractere de uma string
    // cout << str.front() << endl;

    // Concatenando strings
    str.append("Von Lou!");

    cout << "Nome completo: " << str << endl;

    return 0;
}
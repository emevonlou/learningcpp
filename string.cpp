#include <iostream>
#include <string>
using namespace std;

void showMessage(const char *str)
{
    cout << str << endl;
}

int main(int argc, char *argv[])
{
    string str = "Emanuelle";

    cout << "String: " << str << endl;
    cout << "Tamanho: " << str.size() << endl;
    // cout << "Tamanho: " << str.length() << endl;
    // Passando uma posição para a função retornar o caractere que pode ser acessado atraves do numero.
    // cout << "Acesso pelo indice 1: " << str.at(1) << endl;
    // Função Para obter o ultimo caractere de uma string
    // Disponivel para o c++11
    // cout << str.back() << endl;
    // Função para obter o primeiro caractere de uma string
    // cout << str.front() << endl;

    // Concatenando strings
    // str.append("Von Lo"); // A string é colocada ao final.
    // str.push_back('u');   // Adicionando apenas um caractere.

    str.insert(0, "Vonlou"); // insere no inicio da string.
    // str.insert(strsize(), "VonLou");  inserindo ao final.

    // Apagando o sobrenome.
    str.erase(7, str.size()); //7, str.size()) = chamado de range

    cout << "Nome completo: " << str << endl;

    // Verificando se a string é vazia
    if (str.empty())
    {
        cout << "String vazia!!" << endl;
    }
    else
    {
        cout << "String nao vazia!" << endl;
    }

    /* str.erase(0, str.size());

    if (str.empty())
    {
        cout << "String vazia!!" << endl;
    }
    else
    {
        cout << "String nao vazia!" << endl;
    }

    Outra forma(mais simples) de apagar todos os elementos
    str.clear();
    */
    
    showMessage(str.c_str());

    return 0;
}
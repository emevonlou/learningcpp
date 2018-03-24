#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    char eme[] = {0x1b, '[', '1', ';', '3', '6', 'm', 0};
    cout << eme;

    string nome;
    string m = "Não use trígrafos!";
    int i;
    int j;

    for (i = 1; i <= 100; i++)
    {
        cout << m << " ";
    }

    char emes[] = {0x1b, '[', '1', ';', '3', '2', 'm', 0};
    cout << emes;

    cout << endl;
    cout << "Digite um nome: " << endl;
    cin >> nome;

    for (j = 1; j <= 100; j++)
    {
        cout << "You are a Winner " << nome << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

int gerarID()
{
    static int ID = 0;
    return ID++;
}

int main(int argc, char *argv[])
{
    string nome;

    while(true)
    {
        cout << "Digite o nome da pessoa: ";
        cin >> nome;
    }
    
    return 0;
}
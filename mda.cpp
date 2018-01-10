// Parametros adicionais
#include <iostream>
using namespace std;

int quad(int num)
{
    return num * num;
}

int main(int argc, char *argv[])
{
    int num = 10;

    cout << "Quadrado: " << quad(num) << endl;

    return 0;
}
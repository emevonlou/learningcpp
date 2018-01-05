#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char pessoas[3][100] = {"Emanuelle", "Joaquim", "Helio"}; 
    // 3 pessoas e a quantid maxima do nome de cada pessoa é 100 caract
    int idade[3] = {26, 30, 20};

    cout << "Nome: " << pessoas[0] << endl;
    cout << "Idade: " << idade[0] << endl;

 return 0;   
}
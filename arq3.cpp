// 132:
// Abrir um arquivo para a entrada
// Ler o conteudo desse arquivo
#include <iostream>
#include <fstream> // Abrir um arquivo
using namespace std;

int main(int argc, char *argv[])
{
    ifstream in("teste.txt");
    
    string texto; 
    // classe string redimenciona automaticamente para a quant de dados necessaria
    char c = in.get(); // metodo 'get' retorna o proximo caractere
    texto.push_back(c); // Insere o caractere na string

    cout << "\nMostrando cada caracere:\n" << endl;

    return 0;
}
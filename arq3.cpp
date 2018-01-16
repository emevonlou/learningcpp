// 132:
// Abrir um arquivo para a entrada.
// Ler o conteudo desse arquivo.
#include <iostream>
#include <fstream> // Abrir um arquivo.
using namespace std;

int main(int argc, char *argv[])
{
    ifstream in("teste.txt");

    string texto;
    // Classe string redimenciona automaticamente para a quant de dados necessaria.
    char c = in.get();  // Metodo 'get' retorna o proximo caractere.
    texto.push_back(c); // Insere o caractere na string dando um push_back(c).

    cout << "\nMostrando cada caractere:\n" << endl;

    // Loop pra percorrer o arquivo e mostrar caractere por caractere.
    while(in.good()) // Função good não possui parametros.
    {
        // Enquanto for possivel extrair caracteres do arquivo...
        cout << c; // Mostrando o primeiro caractere.
        c = in.get(); // Pegando o proximo caractere.
        texto.push_back(c); // Inserindo o caractere na minha string caso queira usar novamente.
    }

    cout << "\nMostrando a string: \n" << texto << endl;

    return 0;
}
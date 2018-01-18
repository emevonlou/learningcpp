/*
     Palavras reservadas 'try', 'catch','throw'.
     *Try: Tentar executar um bloco de codigo;
     *Catch: Pegar algo para tratar;
     *Trow: Lança uma excecao(erro) que a funcao pode pegar através do 'catch'.
*/
#include <iostream>
using namespace std;

double div(double n1, double n2)
{
    if (n2 == 0)
        throw "Divisao por zero!!\n";
    return n1 / n2;
}

int fat(int n) // Fatorial.
{
    if (n < 0)
        throw "Numero negativo!!!";
    if (n == 0 || n == 1)
        return 1; // Porque fatorial de zero ou um é um.
    return n * fat(n - 1);
}

int main(int argc, char *argv[])
{
    try
    {
        cout << "Fatorial de 5: " << fat(5) << endl; // tento executar esses blocos.
        // cout << "Fatorial de -5: " << fat(-5) << endl;
        // cout << "10/0: " << div(10,0); // erro inesperado que a ide do professor não identificou.

    }
    catch (const char *e) // Se ocorrer algum erro, sera capturado pelos 'Catchs'.
    {                     // Exibe a frase com erro.
        cerr << "Erro: " << e << endl;
    }
    catch (...) // Voce pode ter varios 'Catchs' pra capturar a excecao.
    {           // Pega qualquer outra coisa.

        cerr << "Erro inesperado!" << endl;
    }

    return 0;
}

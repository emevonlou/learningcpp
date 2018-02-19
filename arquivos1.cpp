// Gravando objetos em Arquivos.
#include <iostream>
#include <fstream> // ofstream e ifstream(output e input)
using namespace std;

class Pessoa
{
  private:
    string nome;
    int idade;

  public:
    string &getNome()
    {
        return nome;
    }
    int geIdade()
    {
        return idade;
    }
    void setNome(string &nome)
    {
        this->nome = nome;
    }
    void setIdade()
    {
        this->idade = idade;
    }

    friend ostream &operator<<(ostream os, const Pessoa &p)
    {
        //Escrever cada membro
        os << "\n"
           << p.nome << "\n";
        os << p.idade;
        return os;
    }
};

char menu()
{
    char resp;
    cout << "Digite 1 para inserir pessoas:\n ";
    cout << "Digite 2 para listar pessoas:\n ";
    cout << "Digite 0 para sair:\n ";
    cin >> resp;
    return resp;
}

int main(int argc, char *argv[])
{
    char resp;

    while (true)
    {
        resp = menu();
        if (resp == '1')
        {
            Pessoa pessoa;
            string nome;
            int idade;

            // Adiciona ao final do arquivo.
            ofstream ofs("arquivo.txt", fstream::app);

            cout << "\nDigite o nome da pessoa: ";
            cin >> nome;
            cout << "Digite a idade da pessoa: ";
            cin >> idade;
            cout << endl;

            // seta o nome e a idade
            pessoa.setNome(nome);
            // pessoa.setIdade(idade);

            // ofs << pessoa;
            ofs.close();
        }
        else if (resp == '2')
        {
            cout << "\nListando Pessoas...\n\n";
        }
        else if (resp == '0')
        {
            cout << "\nBye! Visite: http://emevonlou.blogspot.com.br/ \n";
            break;
        }
        else
        {
            cout << "\nOpcao invalida. Tente novamente.\n\n";
        }
    }

    return 0;
}
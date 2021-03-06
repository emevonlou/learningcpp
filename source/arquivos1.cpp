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
    int getIdade()
    {
        return idade;
    }
    void setNome(string &nome)
    {
        this->nome = nome;
    }
    void setIdade(int idade)
    {
        this->idade = idade;
    }
    // Sobrecarga do operador de inserção de dados.
    // ostream = output stream.
    friend ostream &operator<<(ostream &os, const Pessoa &p)
    {
        //Escrever cada membro.
        os << "\n";
        os << p.nome << "\n";
        os << p.idade;
        return os;
    }

    // sobrecarga do operador de extração de dados.
    // istream = input stream.
    friend istream &operator>>(istream &is, Pessoa &p)
    {
        // Ler cada membro.
        is >> p.nome >> p.idade;
        return is;
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

            // app:append, Adiciona ao final do arquivo.
            ofstream ofs("arquivo.txt", fstream::app); // Abrimos o arquivo.

            cout << "\nDigite o nome da pessoa: ";
            cin >> nome;
            cout << "Digite a idade da pessoa: ";
            cin >> idade;
            cout << endl;

            // seta o nome e a idade.
            pessoa.setNome(nome);
            pessoa.setIdade(idade);

            ofs << pessoa; // Armazenando o objeto no arquivo.
            ofs.close();   // Fechamos o arquivo.
        }
        else if (resp == '2')
        {
            Pessoa p;
            ifstream ifs("arquivo.txt");

            cout << "\nListando pessoas...\n\n";

            // Verifica se o arquivo existe e se é possivel ler good()
            if (ifs.good())
            {
                // Enquanto ifs não chegar ao final do arquivo com eof()
                // eof = end of file.
                while (!ifs.eof())
                {
                    ifs >> p; // Faz a extração dos dados.

                    // Mostrar os dados
                    cout << "Nome: " << p.getNome() << "\n";
                    cout << "Idade: " << p.getIdade() << "\n\n";
                }
                ifs.close();
            }
            else
            {
                cout << "Falha ao abrir o arquivo.\n\n";
            }
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
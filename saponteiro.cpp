// Structs aninhadas com ponteiros
#include <iostream>
#include <string>
using namespace std;

typedef struct Universidade
{
    string nome;
}t_universidade;

typedef struct Aluno
{
    string nome;
    t_universidade universidade;
}t_aluno;

int mais(int argc, char *argv[])
{
    t_aluno aluno = {"Manu", {"UFP"}};
    t_aluno * ptr_aluno;
    ptr_aluno = &aluno;

    cout << "Aluno: ," << ptr_aluno->nome << endl;

    return 0;
}

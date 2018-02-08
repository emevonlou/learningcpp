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

    return 0;
}

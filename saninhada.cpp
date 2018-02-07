#include <iostream>
#include <string.h> // strcpy();
using namespace std;

typedef struct Curso
{
    char nome[50];
    double preco;
}t_curso;

typedef struct Estudante  // struct aninhada.
{
    char nome[50];
    Curso curso;
}t_Estudante;

int main(int argc, char *argv[])
{

    return 0;
}
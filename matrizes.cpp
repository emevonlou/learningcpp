// 71:
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int mat[2][2] = {{1, 2}, {3, 4}};
    /* 
        Dois colchetes(o primeiro das linhas, o segundo das colunas)
        Matriz inicializada(primeira linha{1,2};segunda linha{3,4})
    */
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; i++)
        {
            cout << mat[i][j] << "\t"; // O 'i' acessa linhas e o 'j' acessa colunas.
        }
        cout << endl;
    }

    return 0;
}
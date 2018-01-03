// 92:
#include <iostream>
using namespace std;

int main()
{
    int matriz[2][2], i, j;

    // Passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //imprimindo na tela
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            // cout << i << ", j: " << j<< endl;
            cout << matriz[i][j];
        }
        cout << endl;
    }

    return 0;
}
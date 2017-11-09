#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    for(int i = 1979; i <= 2017; i++)
    {
        cout << "Estamos no ano: " << i << endl;
        cout << "-----------------------------------------------" << endl;
        for(int j = 1; j <= 12; j++)
        {
            cout << "Estamos no mes: " << j << endl;
            cout << "-----------------------------------------------" << endl;
            for(int k = 1; k <= 30; k++)
            {
            //    cout << "Estamos no dia: " << k << endl;
            }
        }

    }
}
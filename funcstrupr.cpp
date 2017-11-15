/* função strupr() 
da biblioteca <cstring>
que recebe duas strings 
e converte em maiusculas!
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
    char p1[30], p2[30];

    cout << "Digite a disciplina: ";
    cin.getline(p1,30);
    cout << "Digite a disciplina: ";
    cin.getline(p2,30);

    cout << "\n" << strupr(p1);
    cout << "\n" << strupr(p2);
    cout << endl << endl;

    system("pause");
}
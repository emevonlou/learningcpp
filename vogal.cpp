#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    char  letra;
    cout<<"digite uma letra: "<<endl;
    cin>> letra;

    if((letra == 'a')||(letra == 'e')||(letra == 'i')||(letra == 'o')||(letra == 'u'))
    {
        cout<< "Sua letra é uma vogal!"<<endl;
    }
    else
    {
        cout<< "Sua letra é uma consoante!"<<endl;
    }

    cout<< "FIM!"<<endl;

    return 0;
}
#include <iostream>
using namespace std;

void joaquim()
{
    cout << "My game is beautiful!!" << endl;
}

void mensagem()
{
    cout << "Joaquim é um menino lindo!" << endl;
}

int main(int argc, char *argv[])
{
    int x;

    cout << "Digite um numero: " << endl;
    cin >> x;
    
    if(x <= 10 )
    {
        mensagem();
    }
    else
    {
      joaquim();  
    }

 return 0;
}
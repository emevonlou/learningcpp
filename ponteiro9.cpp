#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = 10;
    int *pont; 

    pont = &n; // 'Pega o endereço da variável n(int n = 10) e guarda em pont'
    
    cout << *pont << endl;
   return 0;
}
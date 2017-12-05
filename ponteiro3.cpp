#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
    int *vet = new int[10];
    int aux[3];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;

    int x =(int)sizeof(aux)/sizeof(int);

   for(int i = 0; i < x; i++)
   {
       cout << aux[i] << endl;
   }
    return 0;
}
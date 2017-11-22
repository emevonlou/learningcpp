#include <iostream>
using namespace std;

int main()
{
     int conta, x = 1, r = 1;

     for (conta = 2; conta >= 0; conta--)
    {
       r = r * x + 1;
        x += 2;
       cout << "r= "  << r << "  x = " << x << endl;
    }
}
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int num, c, conta6 = 0;
	for(c= 1; c <=5; c++)
	{
		cout << "\n digite numero: ";
		cin >> num;
		if(num % 6 == 0)
		conta6 ++;
        cout << "\n Total de multiplos de 6: " << conta6 << endl;
    }
	system("pause");
}
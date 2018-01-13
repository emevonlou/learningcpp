// 8:
#include <iostream>
#include <cstdlib>   // System("pause");
using namespace std; // Declaração de espaço de nomes(Serve pra resolver conflitos de nomes).

int main()
{
	int num, c, conta6 = 0;
	for (c = 1; c <= 5; c++)
	{
		cout << "\n digite numero: ";
		cin >> num;
		if (num % 6 == 0)
			conta6++;
		cout << "\n Total de multiplos de 6: " << conta6 << endl;
	}
	system("pause");
}
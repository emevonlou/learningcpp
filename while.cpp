// 12:
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n;

	cout << "Digite um numero: " << endl;
	cin >> n;

	while (n <= 100)
	{
		if (n > 20)
			break;
		cout << n << endl;
		n++;
	}
	return 0;
}
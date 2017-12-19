// Because the curious is the happiest!

#include <iostream>
#include <cstdlib>
#include <locale.h> //setlocale(LC_ALL, "")--- para acentos
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "You must enter 13 to exit: " << endl;
	cin >> x;
	while(x != 13)
	{
	   cout << "muahahaha!" << endl;
	   cin >> x;  	
	}
	system("pause");
	return 0;
}
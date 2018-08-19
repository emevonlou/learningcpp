/* 2:
   Function name: main, bool
   function main does not receive parameters. 
   Function bool receive int num parameter.
   Objective: Show how to handle functions.
   return: 0
*/

#include <iostream>
#include <cstdlib>

using namespace std;

bool even(int num);
void message();

int main()
{
	int n;

	message();
	cout << "Enter number: ";
	cin >> n;
	if (even(n))
	{
		cout << "The number " << n << " is even." << endl;
	}
	else
	{
		cout << "The number " << n << " is odd." << endl;
	}
	system("pause");
	return 0;
}

void message()
{
	cout << "learning C++ with fun!" << endl;
}

bool even(int num)
{
	if (num % 2 == 0)
		return true;
	return false;
}
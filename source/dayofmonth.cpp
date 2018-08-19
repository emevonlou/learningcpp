/*
   3:	
   Function name: main
   It does not receive parameters.
   Objective: show how many days the month has.
   return: 0
*/

#include <iostream> // Entrada e saida de dados
#include <cstdlib>  // system
using namespace std;

int main(int argc, char **argv)
{
	int month, days;

	cout << "Enter the number of the month: " << endl;
	cin >> month;

	switch (month)
	{
	case 1:
		days = 31;
		break;
	case 2:
		days = 28;
		break;
	case 3:
		days = 31;
		break;
	case 4:
		days = 30;
		break;
	case 5:
		days = 31;
		break;
	case 6:
		days = 30;
		break;
	case 7:
		days = 30;
		break;
	case 8:
		days = 31;
		break;
	case 9:
		days = 30;
		break;
	case 10:
		days = 31;
		break;
	case 11:
		days = 30;
		break;
	case 12:
		days = 31;
		break;
	default:
		cout << "You entered an invalid month." << endl;
	}
	cout << "The month " << month << " have " << days << " days." << endl;
	system("pause");
	return 0;
}
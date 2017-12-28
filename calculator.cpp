/*
1:
---> Calculator
---> allowed operations:
---> + -> Sum
---> - -> subtraction
---> * -> multiplication
---> / -> Division
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char op;

	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	cout << "Enter the operation: " << endl;
	cin >> op;

	switch (op)
	{
	case '+':
		result = num1 + num2;
		cout << "Sum: " << result << endl;
		break;
	case '-':
		result = num1 - num2;
		cout << "Subtraction: " << result << endl;
		break;
	case '*':
		result = num1 * num2;
		cout << "Multiplication: " << result << endl;
		break;
	case '/':
		result = num1 / num2;
		cout << "Division: " << result << endl;
		break;
	default:
		cout << "Non-existent operation." << endl;
		break;
	}
	system("pause");
	return 0;
}
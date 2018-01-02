/*
	117:
	O c++ permite declarar uma fun��o que aceite
	seu argumento por refer�ncia
*/
#include <iostream>
using namespace std;

void fun(int &n)
{
	n = 9;
}

int main(int argc, char *argv[])
{
	int n = 10;

	fun(n);

	cout << n << endl;

	return 0;
}
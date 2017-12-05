/*
    Function name: main
    does not receive parameters
    objective: Simple example of manipulation with vectors.
    return: 0
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	int B[8];
	double C[2];
	string D[3];
	
	for(int indice = 0; indice < 8; indice++) {
		B[indice] = 0;
		cout << B[indice] << " ";
		cout << endl;
	}
	for(int indice=0; indice <2; indice++) {
		C[indice] = 3.1415 * indice;
		cout << C[indice] << " ";
		cout << endl;
	}
	D[0] = "Emanuelle";
	D[1] = "Joaquim";
	D[2] = "Helio";

	for(int indice = 0; indice <3;indice++) {
		cout << D[indice] << endl;
	}
	system("pause");
}
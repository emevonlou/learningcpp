#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    cout << "Please enter your name: " << endl;
    string name;
    cin >> name;

    string greeting = "hello" + name + "!";
    string spaces(greeting.size(), ' ');
    string stars(greeting.size(), '*');

    cout << "**" << stars << "**" << endl;
    cout << "* " << spaces << " *" << endl;
    cout << "* " << greeting << " *" << endl;
    cout << "* " << spaces << " *" << endl;
    cout << "**" << stars << "**" << endl;

    return 0;
}
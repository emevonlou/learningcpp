// 41:
#include <iostream>
using namespace std;

int n = 10;

int main(void)
{
  int n = 20;
  {
    int n = 30;
    ::n++; //altera a variável global
    cout << ::n << " " << n << endl;
  }
  cout << ::n << " " << n << endl;
}
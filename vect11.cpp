#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> a(2, 20);
    vector<int> b(3, 10);

    a.swap(b);
    for(unsigned int i = 0; i < a.size(); i++)
         cout << a[i] << endl;
    for(unsigned int j = 0; j < a.size(); j++)
         cout << b[j] << endl;

    return 0;
}
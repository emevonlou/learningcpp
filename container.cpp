#include <iostream>
#include <vector> //classe vector
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v;

    v.push_back(10);
    v.push_back(12);
    v.push_back(20);
    v.push_back(30);

    for(unsigned int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
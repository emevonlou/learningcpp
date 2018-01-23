// 147: 
#include <iostream>
#include <vector> // Clear()
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v(3, 10);

    cout << v.size() << endl;
    v.clear(); // Deleta todos os elementos do vetor.
    cout << v.size() << endl;

    return 0;
}
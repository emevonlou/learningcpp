// 137:
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v(3);  // obtendo 3 como tamanho inicial do vetor.
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    for(unsigned int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

  return 0;
}

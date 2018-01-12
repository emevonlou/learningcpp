// 130: funcoes inline
#include <iostream>
using namespace std;

inline void Eme()  // funcoes inline cobram mais espaco na memoria.
{
    cout << "Learning C++" << endl;
}

int main(int argc, char *argv[])
{
    Eme();
    return 0;
}
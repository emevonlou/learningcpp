// 130: funcoes inline.
#include <iostream>
using namespace std;

inline void Eme()  // Funcoes inline cobram mais espaco na memoria.
{
    cout << "Learning C++" << endl;
}

inline void message()
{
    cout << "I really in love with that!" << endl;
}

int main(int argc, char *argv[])
{
    Eme();
    message();
    return 0;
}
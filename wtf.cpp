// 46: solving life troubles.
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = 1;

    while (n <= 200)
    {
        cout << "Life is too short for bad coffee!" << endl;
        n++;
    }
    /*
        Quando tiver que adicionar informações ao LOG do programa,
        vamos utilizar o objeto Console LOG, que numa tradução significa, 
        "Console de informações de estado e funcionamento do programa".
    
    */

    clog << "With 'clog' is Better! YaY" << endl;

    return 0;
}
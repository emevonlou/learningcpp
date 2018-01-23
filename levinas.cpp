// string randomico
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char think[] =
    "Emanuel Levinas!";

int stringLength = sizeof(think) - 1;

char genRandom() // Random string generator function.
{

    return think[rand() % stringLength];
}

int main()
{
    srand(time(0));
    for (int z = 0; z < 21; z++)
    {
        cout << genRandom();
    }
    return 0;
}

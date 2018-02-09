#include <iostream>

namespace ns1
{
    int num = 42;
}

namespace ns2
{
    int num = 50;
}

// using namespace ns1;
using namespace ns2;

int main(int argc, char *argv[])
{
    std::cout << num << std::endl;

    return 0;
}
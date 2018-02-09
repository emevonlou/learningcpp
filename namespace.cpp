// 159:
#include <iostream>

namespace ns1
{
    int num = 42;
    class A
    {
    public:
        void imprimir()
        {
            std::cout << "Olá, sou a classe A do namespace ns1\n";
        }
    };
}

namespace ns2
{
    int num = 50;
    class A
    {

    };
}

int main(int argc, char *argv[])
{
    std::cout << ns1::num << std::endl;
    std::cout << ns2::num << std::endl;

    return 0;
}
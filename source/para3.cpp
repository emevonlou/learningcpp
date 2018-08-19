// 50:
#include <iostream>
using namespace std;

int main()
{
    int conta, num = 1, s = 0;

    for (conta = 10; conta <= 40; conta = conta + 10)
    {
        s = s + num;
        num = num + 2;
    }
    cout << s << endl;

    cout << num << endl;

    return 0;
}
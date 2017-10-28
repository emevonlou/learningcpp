//Find the numbers corresponding to these characters.

#include <stdio.h>


int main(void)
{
    for(int i = 0; i <= 300; i++)
    {
        printf("[%d]: %c\n", i, i);
    }
    getchar();
    return 0;
}
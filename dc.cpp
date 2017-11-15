//Find the numbers corresponding to these characters.

#include <stdio.h> // Entrada e saida de dados


int main(void)
{
    for(int i = 0; i <= 300; i++)
    {
        printf("[%d]: %c\n", i, i);
    }
    getchar();
    return 0;
}
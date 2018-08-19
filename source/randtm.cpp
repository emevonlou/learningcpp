// rand() <3
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

int main()
{
    int s, iGuess;

    /* initialize random seed: */
    srand(time(NULL));

    /* generate secret number between 1 and 10: */
    s = rand() % 10 + 1;

    do
    {
        printf("Guess the number (1 to 10): ");
        scanf("%d", &iGuess);
        if (s < iGuess)
            puts("The secret number is lower");
        else if (s > iGuess)
            puts("The secret number is higher");
    } while (s != iGuess);

    puts("Congratulations!");
    return 0;
}
// rand() <3
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

int main()
{
    int iSecret, iGuess;

    /* initialize random seed: */
    srand(time(NULL));

    /* generate secret number between 1 and 100: */
    iSecret = rand() % 100 + 1;

    do
    {
        printf("Guess the number (1 to 100): ");
        scanf("%d", &iGuess);
        if (iSecret < iGuess)
            puts("The secret number is lower");
        else if (iSecret > iGuess)
            puts("The secret number is higher");
    } while (iSecret != iGuess);

    puts("Congratulations!");
    return 0;
}
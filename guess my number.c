#include <stdio.h>

int main()
{
    int secretNumber;
    int numGuess;
    int tries = 0;

    scanf("%d", &secretNumber);
    while (numGuess != secretNumber)
    {
        scanf("%d", &numGuess);
        if(numGuess < secretNumber )
            printf("it is more\n");
        if(numGuess > secretNumber)
            printf("it is less\n");
        tries++;
    }
    printf("Number of tries needed:\n%d", tries);

    return 0;
}

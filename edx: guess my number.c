#include <stdio.h>

int main()
{
    int secretNumber;
    scanf("%d",&secretNumber);
    int proposal = secretNumber + 1;
    int nbTries = 0;
    while (proposal != secretNumber)
    {
        scanf("%d",&proposal);
        if (proposal < secretNumber)
            printf("it is more\n");
        if (proposal > secretNumber)
            printf("it is less\n");
        nbTries = nbTries + 1;
    }
    printf("Number of tries needed:\n%d\n",nbTries);

    return 0;
}

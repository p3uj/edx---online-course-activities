#include<stdio.h>

int main()
{
    int i, ingredients = 0;
    int numPound = 0;
    double price = 0.0;
    double storePrice[10];
    double cost = 0.0;
    double pound = 0;
    
    scanf("%d", &ingredients);
    if (ingredients > 10)
    {
        printf("Warning: Maximun of 10 ingredients only!");
        goto stop;  // To force the program to stop. Therefore, the following conditions on the goto stop will not be executed.
    }
    for (i = 0; i < ingredients; i++)
    {
        scanf("%lf", &price);
        storePrice[i] = price;
    }
    for (numPound = 0; numPound < ingredients; numPound++)
    {
        scanf("%lf", &pound);
        cost = cost + storePrice[numPound] * pound;
    }
    printf("%lf", cost);

    stop:
    return 0;
}

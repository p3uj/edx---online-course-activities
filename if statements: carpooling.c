#include<stdio.h>

int main()
{
    int numOfPassengers = 0;
    float gas = 0;

    scanf("%d", &numOfPassengers);
    scanf("%f", &gas);
    if (numOfPassengers >=1)
        printf("%.2f", (gas+1)/(numOfPassengers+1));
    else
        printf("%.2f", numOfPassengers+gas);
}

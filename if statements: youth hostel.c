#include<stdio.h>

int main()
{
    int arrival = 0;

    scanf("%d", &arrival);
    if (arrival < 10)
        printf("%d", 10+arrival*5);
    else
        printf("53");
    
    return 0;
}

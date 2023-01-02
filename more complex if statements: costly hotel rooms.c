#include<stdio.h>

int main()
{
    int age = 0;
    int weightOfLuggage = 0;

    scanf("%d", &age);
    scanf("%d", &weightOfLuggage);
    if(age == 60)
        printf("0");
    else if (age < 10)
        printf("5");
    else if (age > 9 && weightOfLuggage < 21)
        printf("30");
    else
        printf("40");

    return 0;
}

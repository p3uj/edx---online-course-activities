#include<stdio.h>

int main()
{
    int dice1, dice2 = 0;
    int sum = 0;

    scanf("%d", &dice1);
    scanf("%d", &dice2);
    sum = dice1 + dice2;
    if(sum >= 10){
        printf("Special tax\n");
        printf("36");
    }else
        printf("Regular tax\n%d", sum * 2);

    return 0;
}

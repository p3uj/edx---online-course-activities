#include<stdio.h>

int main()
{
    int expense, sum = 0;

    scanf("%d", &expense);
    while(expense != -1)
    {
        sum += expense;
        scanf("%d", &expense);
    }
    printf("%d", sum);

    return 0;
}

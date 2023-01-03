#include <stdio.h>

int main()
{
    int expense;
    scanf("%d",&expense);
    int sumOfExpenses = 0;
    while (expense != -1)
    {
        sumOfExpenses = sumOfExpenses + expense;
        scanf("%d",&expense);
    }
    printf("%d\n",sumOfExpenses);

    return 0;
}

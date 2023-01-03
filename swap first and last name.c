#include<stdio.h>

int main()
{
    int totalNumOfNames, i;
    char firstName[101], lastName[101];

    scanf("%d", &totalNumOfNames);
    for (i = 0; i < totalNumOfNames; i++)
    {
        scanf("%s %s", firstName, lastName);
        printf("%s %s\n", lastName, firstName);
    }
    return 0;
}

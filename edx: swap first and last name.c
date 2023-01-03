#include <stdio.h>

int main(void) 
{
    int num, i;
    char first[101], last[101];
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
       scanf("%s", first);
       scanf("%s", last);
       printf("%s %s\n", last, first);
    }

    return 0;
}

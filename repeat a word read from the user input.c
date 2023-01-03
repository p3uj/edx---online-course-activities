#include<stdio.h>

int main()
{
    char word[101];
    int num, i;

    scanf("%d %s", &num, word);
    for (i = 0; i < num; i++)
        printf("%s\n", word);
    return 0; 
}

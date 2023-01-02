#include<stdio.h>

int main()
{
    int height = 0;
    int leafletsNum = 0;

    scanf("%d %d", &height, &leafletsNum);
    if(height <= 5 && leafletsNum >= 8)
        printf("Tinuviel");
    else if(height >= 10 && leafletsNum >= 10)
        printf("Calaelen");
    else if(height <= 8 && leafletsNum <= 5)
        printf("Falarion");
    else if(height >= 12 && leafletsNum <= 7)
        printf("Dorthonion");
    else
        printf("Uncertain");
            
    return 0;
}

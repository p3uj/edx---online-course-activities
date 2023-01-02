#include <stdio.h>
int main(void) {
    int totalExceedsOrEquals10;
    int total;
    int dice1 = 0;
    int dice2 = 0;

    scanf("%d %d", &dice1, &dice2);
    total = dice1+dice2;
    totalExceedsOrEquals10 = total >= 10;

    if(totalExceedsOrEquals10){
        printf("Special tax\n");
        printf("36");
    }else{
        printf("Regular Tax\n");
        printf("%d", total*2);
    }

    return 0;
}

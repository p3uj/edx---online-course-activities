#include <stdio.h>

int main(void) {
    char word[101]; 
    int num, i;

    scanf("%d", &num);
    scanf("%s", word);

    for (i=0; i<num; i++)
        printf("%s\n", word);

    return 0;
}

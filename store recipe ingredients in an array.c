#include<stdio.h>

int main()
{
    int ingredients[10];
    int quantities = 0;
    int i = 0;
    int index = 0;

    for ( i = 0; i < 10; i++){
        scanf("%d", &quantities);
        ingredients[index] = quantities;
        index++;
    }
    scanf("%d", &quantities);
    printf("%d", ingredients[quantities]);
    
    return 0;
}

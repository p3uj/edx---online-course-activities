#include <stdio.h>

int main() {
    int array[10];
    int readValue = 0;
    int index = 0; //indice 

    for(int i = 0 ; i < 10 ; i++){
        scanf("%d", &readValue);
        array[index] = readValue;
        index = index + 1;
    }

    scanf("%d", &readValue);
    printf("%d", array[readValue]);
    return 0;
}

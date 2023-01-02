#include <stdio.h>
int main() {
    int nbPassengers = 0;
    double totalCost = 0.0;
    scanf("%d %lf", &nbPassengers, &totalCost);
    int alone = nbPassengers == 0;
    if(alone){
        printf("%.2lf", totalCost);
    }else{
        totalCost = totalCost + 1; //car pooling site fees
        printf("%.2lf", totalCost/(nbPassengers+1));
    }
    return 0;
}

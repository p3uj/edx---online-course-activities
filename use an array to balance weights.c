#include <stdio.h>

int main()
{
    int boxCarsNum, carNumber;
    double weights[50];
    double totalWeight = 0.0;
    double averageWeight;
    
    scanf("%d\n",&boxCarsNum);
    for (carNumber = 0; carNumber < boxCarsNum; carNumber++){
        scanf("%lf",&weights[carNumber]);
        totalWeight = totalWeight + weights[carNumber];
    }
    averageWeight = totalWeight / boxCarsNum;
    for (carNumber = 0; carNumber < boxCarsNum; carNumber++){
        printf("%.1lf\n",averageWeight - weights[carNumber]);
    }
    return 0;
}

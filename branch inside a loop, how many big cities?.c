#include<stdio.h>

int main()
{
    int numCities, i, numPopulation, result = 0;

    scanf("%d", &numCities);
    for(i = 0; i < numCities; i++)
    {
        scanf("%d", &numPopulation);
        if(numPopulation > 10000)
        {
            result = result + 1;
        }
    }
    printf("%d", result);

    return 0;
}

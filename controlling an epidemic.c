#include<stdio.h>

int main()
{
    int numPopulation = 0;
    int day = 1;
    int personInfected = 1;

    scanf("%d", &numPopulation);
    while(personInfected < numPopulation)
    {
        day++;
        personInfected *= 3;
    }
    printf("%d", day);   
    return 0;
}

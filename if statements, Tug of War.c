#include<stdio.h>

int main()
{
    int numOfPlayers = 0;
    int i = 0;
    int weight = 0;
    int team1SumWeight = 0;
    int team2SumWeight = 0;

    scanf("%d", &numOfPlayers);
    for(i=0; i<numOfPlayers; i++){
        scanf("%d", &weight);
        team1SumWeight = team1SumWeight + weight;
        scanf("%d", &weight);
        team2SumWeight = team2SumWeight + weight; 
    }
    if(team1SumWeight > team2SumWeight)
        printf("Team 1 has an advantage\n");
    else
        printf("Team 2 has an advantage\n");

    printf("Total weight for team 1: %d", team1SumWeight);
    printf("\nTotal weight for team 2: %d", team2SumWeight);

    return 0;
}

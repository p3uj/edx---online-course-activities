#include <stdio.h>
int main() {
    int i;
    int nbMembers = 0;
    int totalWeightTeam1 = 0;
    int totalWeightTeam2 = 0;
    int weightRead = 0;
    scanf("%d", &nbMembers);
    for(i=0; i<nbMembers; i++){
        scanf("%d", &weightRead);
        totalWeightTeam1 = totalWeightTeam1 + weightRead;
        scanf("%d", &weightRead);
        totalWeightTeam2 = totalWeightTeam2 + weightRead;
    }
    int advantageTeam1 = totalWeightTeam1 > totalWeightTeam2;
    if(advantageTeam1){
        printf("Team 1 has an advantage\n");
    }else{
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", totalWeightTeam1);
    printf("Total weight for team 2: %d\n", totalWeightTeam2);
    return 0;
}

#include<stdio.h>

int main()
{
    int minTemp;
    int maxTemp;
    int temperature;
    
    scanf("%d", &minTemp);
    scanf("%d", &maxTemp);
    while(temperature != -999)
    {
        scanf("%d", &temperature);
        if(temperature >= minTemp && temperature <= maxTemp)
            printf("Nothing to report\n");
        else{
            printf("Alert");
            break;
        }          
    }
    return 0;
}

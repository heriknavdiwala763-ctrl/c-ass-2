#include <stdio.h>
#include<string.h>
struct cricket
{
    char pname[30];
    char tname[30];
    float average;
};
int main()
{
    struct cricket player[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter details of player %d\n",i+1);
        printf("Player Name: ");
        scanf("%s",player[i].pname);
        printf("Team Name: ");
        scanf("%s",player[i].tname);
        printf("Batting Average: ");
        scanf("%f",&player[i].average);
    }
    printf("\n--- team wise player list ---\n");
    for(i=0;i<3;i++)
    {
        printf("Team Name: %s\n",player[i].tname);
        printf("Player Name: %s\n",player[i].pname);
        printf("Batting Average: %.2f\n",player[i].average);
    }
    return 0;
}
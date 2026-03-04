#include <stdio.h>
#include<string.h>
struct census
{
    char city[30];
    long population;
    float literacy;
};
int main()
{
    struct census c[5],temp;
    int i,j,choice;
    for(i=0;i<5;i++)
    {
        printf("\nEnter details of city %d\n",i+1);
        printf("City Name: ");
        scanf("%s",c[i].city);
        printf("Population: ");
        scanf("%ld",&c[i].population);
        printf("Literacy Rate: ");
        scanf("%f",&c[i].literacy);
    }
    printf("Choose sorting option :: ");
    printf("\n1.alphabetically");
    printf("\n2.literacy level");
    printf("\n3.population");
    printf("\nenter choice :: ");
    scanf("%d",&choice);
    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if((choice==1 && strcmp(c[i].city,c[j].city)>0) ||
               (choice==2 && c[i].literacy>c[j].literacy) ||
               (choice==3 && c[i].population>c[j].population))
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\n sorted list :: \n");
    printf("City\tPopulation\tLiteracy\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t%ld\t%.2f\n",c[i].city,c[i].population,c[i].literacy);
    }
    return 0;
}
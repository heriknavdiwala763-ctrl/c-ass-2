#include<stdio.h>
struct hotel
{
    char name[20];
    char address[30];
    int grade;
    float average_room_charge;
    int no_of_rooms;
};
void displaybygrade(struct hotel h[],int n,int grade);
void displaybycharge(struct hotel h[],int n,float charge);
void sortbycharge(struct hotel h[],int n);
int main()
{
    struct hotel h[5];
    int i,grade;
    float charge;
    for(i=0;i<5;i++)
    {
        printf("enter details of hotel %d\n",i+1);
        printf("name: ");
        scanf("%s",h[i].name);
        printf("address: ");
        scanf("%s",h[i].address);
        getchar();
        printf("grade: ");
        scanf("%d",&h[i].grade);
        printf("average room charge: ");
        scanf("%f",&h[i].average_room_charge);
        printf("number of rooms: ");
        scanf("%d",&h[i].no_of_rooms);
    }
    printf("enter grade to display hotels :: ");
    scanf("%d",&grade);
    displaybygrade(h,5,grade);
    return 0;
}
void displaybygrade(struct hotel *h,int n,int grade)
{
    int i;
    sortbycharge(h,n);
    printf("hotels with grade %d:\n",grade);
    for(i=0;i<n;i++)
    {
        if(h[i].grade==grade)
        {
            printf("name: %s\naddress: %s\n",h[i].name,h[i].address);
        }
    }
}
void displaybycharge(struct hotel *h,int n,float charge)
{
    int i;
    printf("hotels with room charge less than %.2f\n",charge);
    for(i=0;i<n;i++)
    {
        if(h[i].average_room_charge<charge)
        {
            printf("%s %.2f\n",h[i].name,h[i].average_room_charge);
        }
    }
}
void sortbycharge(struct hotel *h,int n)
{
    int i,j;
    struct hotel temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(h[j].average_room_charge>h[j+1].average_room_charge)
            {
                temp=h[j];
                h[j]=h[j+1];
                h[j+1]=temp;
            }
        }
    }
}
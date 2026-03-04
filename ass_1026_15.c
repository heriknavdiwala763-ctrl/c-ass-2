#include<stdio.h>
#include<string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct student_record
{
    char name[20];
    struct date dob;
    int total_marks;
};
int main()
{
    struct student_record s[10],temp;
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("\nenter details of student %d\n",i+1);
        printf("name: ");
        scanf("%s",s[i].name);
        printf("date of birth (dd mm yyyy): ");
        scanf("%d %d %d",&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
        printf("total marks: ");
        scanf("%d",&s[i].total_marks);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(s[i].total_marks<s[j].total_marks)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("\n\nrank-wise student list:\n");
    printf("------------------------------------------------");
    printf("\nRank\tName\t\tDOB\t\tMarks\n");
    printf("------------------------------------------------\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t%s\t%d/%d/%d\t%d\n",i+1,s[i].name,s[i].dob.day,s[i].dob.month,s[i].dob.year,s[i].total_marks);
    }
    return 0;
}
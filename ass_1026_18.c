#include<stdio.h>
struct student
{
    int roll;
    float marks;
};
int main()
{
    struct student s;
    struct student *ptr;
    ptr=&s;
    printf("enter roll number :: ");
    scanf("%d",&ptr->roll);
    printf("enter marks :: ");
    scanf("%f",&ptr->marks);
    printf("\n------student details------\n");
    printf("Roll Number: %d\n",ptr->roll);
    printf("Marks: %.2f\n",ptr->marks);
    return 0;
}
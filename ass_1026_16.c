#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
int main()
{
    printf("size of student structure: %lu bytes\n", sizeof(struct student));
    return 0;
}
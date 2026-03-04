#include <stdio.h>

struct student
{
    int roll;
    float marks;
};

int main()
{
    struct student s;
    struct student *p;

    p = &s;

    p->roll = 101;
    p->marks = 85.5;

    printf("Roll = %d\n", p->roll);
    printf("Marks = %.2f", p->marks);

    return 0;
}
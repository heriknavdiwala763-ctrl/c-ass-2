#include <stdio.h>

int main()
{
    int a=10;
    int *p;

    p=&a;

    printf("Value of a: %d\n",*p);

    p++;

    printf("Pointer after increment: %p",p);

    return 0;
}
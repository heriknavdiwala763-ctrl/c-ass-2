#include <stdio.h>

void space(int x)
{
    int i;
    for (i = 1; i <= x; i++)
        printf(" ");
}

int main()
{
    printf("10");
    space(5);
    printf("20");

    return 0;
}
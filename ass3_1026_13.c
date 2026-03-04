#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int *p[3];

    p[0] = &a;
    p[1] = &b;
    p[2] = &c;

    printf("Addresses and values:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Address = %p Value = %d\n", p[i], *p[i]);
    }

    return 0;
}
#include <stdio.h>

int x, y;

void exchange()
{
    int t;
    t = x;
    x = y;
    y = t;
}

int main()
{
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    exchange();

    printf("After exchange: x=%d y=%d", x, y);

    return 0;
}
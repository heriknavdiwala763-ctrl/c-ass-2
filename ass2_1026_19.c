#include <stdio.h>

int leap(int y)
{
    if (y % 400 == 0)
        return 1;
    if (y % 4 == 0 && y % 100 != 0)
        return 1;
    return 0;
}

int main()
{
    int y;
    printf("enter year :: ");
    scanf("%d", &y);

    if (leap(y))
        printf("Leap year");
    else
        printf("Not leap year");

    return 0;
}
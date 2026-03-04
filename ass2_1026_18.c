#include <stdio.h>

void month(int m)
{
    char *name[] = { "Jan" , "Feb" , "Mar" , "Apr" , "May" , "Jun" , "Jul" , "Aug" , "Sep" , "Oct" , "Nov" , "Dec" };

    if (m >= 1 && m <= 12)
        printf("%s", name[m - 1]);
    else
        printf("Invalid month");
}

int main()
{
    int m;
    printf("enter number of month :: ");
    scanf("%d", &m);
    month(m);
    return 0;
}
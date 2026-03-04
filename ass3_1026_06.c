#include <stdio.h>

char *day_name(int n)
{
    static char *days[] =
    {
        "Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday",
        "Friday", "Saturday"
    };

    if (n >= 1 && n <= 7)
    {
        return days[n - 1];
    }
    return "Invalid";
}

int main()
{
    int n;

    printf("Enter day number: ");
    scanf("%d", &n);

    printf("Day is: %s", day_name(n));

    return 0;
}
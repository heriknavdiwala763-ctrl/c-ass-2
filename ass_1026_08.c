#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int comparedate(struct date d1, struct date d2);
int main()
{
    struct date d1, d2;
    int result;
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);
    result = comparedate(d1, d2);
    if (result == 1)
        printf("date1 is earlier than date2\n");
    else
        printf("date1 is later than date2\n");
    return 0;
}
int comparedate(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
        return 1;
    else if (d1.year > d2.year)
        return 0;
    if (d1.month < d2.month)
        return 1;
    else if (d1.month > d2.month)
        return 0;
    if (d1.day < d2.day)
        return 1;
    else
        return 0;
}

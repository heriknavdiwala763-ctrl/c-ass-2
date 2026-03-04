#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct date d;
    long int inputdate;
    printf("enter date in YYYYMMDD format :: ");
    scanf("%ld",&inputdate);
    d.year=inputdate/10000;
    d.month=(inputdate/100)%100;
    d.day=inputdate%100;
    printf("\nday=%d",d.day);
    printf("\nmonth=%d",d.month);
    printf("\nyear=%d",d.year);
    return 0;
}
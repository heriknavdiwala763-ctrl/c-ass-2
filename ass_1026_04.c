#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
void readdate(struct date *d);
int validatedate(struct date d);
void printdate(struct date d);
int isleapyear(int year);
int main()
{
    struct date d;
    readdate(&d);
    if(validatedate(d))
    {
        printdate(d);
    }
    else
    {
        printf("Invalid date\n");
    }
    return 0;
}
void readdate(struct date *d)
{
    printf("Enter day, month and year: ");
    scanf("%d %d %d", &d->day, &d->month, &d->year);
}
int validatedate(struct date d)
{
    int daysinmonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((d.year%4==0 && d.year%100!=0) || (d.year%400==0))
        daysinmonth[2]=29;
    if(d.month<1 || d.month>12)
        return 0;
    if(d.day<1 || d.day>daysinmonth[d.month-1])
        return 0;
    return 1;
}
int isleapyear(int year)
{
    if(year%400==0)
        return 1;
    if(year%100==0)
        return 0;
    if(year%4==0)
        return 1;
    return 0;
}
void printdate(struct date d)
{
    char *months[]=
    {
        "January","February","March","April","May","June","July","August","September","October","November","December"
    };
    printf("date: %s %d, %d\n", months[d.month-1], d.day, d.year);
}
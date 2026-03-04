#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int isleapyear(int y)
{
    if((y%400==0) || (y%4==0 && y%100!=0))
        return 1;
    else
        return 0;
}
struct date update(struct date d)
{
    int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(isleapyear(d.year))
        daysinmonth[1]=29;
    d.day++;
    if(d.day>daysinmonth[d.month-1])
    {
        d.day=1;
        d.month++;
        if(d.month>12)
        {
            d.month=1;
            d.year++;
        }
    }
    return d;
}
int main()
{
    struct date d;
    printf("enter date :: ");
    scanf("%d %d %d",&d.day,&d.month,&d.year);
    d=update(d);
    printf("updated date : %02d-%02d-%d",d.day,d.month,d.year);
    return 0;
}
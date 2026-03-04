#include<stdio.h>
struct time
{
    int hour;
    int minute;
    int second;
};
struct time update(struct time t)
{
    t.second++;
    if(t.second==60)
    {
        t.second=0;
        t.minute++;
    }
    if(t.minute==60)
    {
        t.minute=0;
        t.hour++;
    }
    if(t.hour==24)
    {
        t.hour=0;
    }
    return t;
}
int main()
{
    struct time t;
    printf("enter hour:: ");
    scanf("%d",&t.hour);
    printf("enter minute:: ");
    scanf("%d",&t.minute);
    printf("enter second:: ");
    scanf("%d",&t.second);
    t=update(t);
    printf("updated time is %02d:%02d:%02d",t.hour,t.minute,t.second);
    return 0;
}
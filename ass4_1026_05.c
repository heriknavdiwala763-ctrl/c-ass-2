#include<stdio.h>
int main()
{
    FILE *fp=fopen("numbers.txt","r");
    int n,sum=0;
    if(fp==NULL)
    {
        printf("file cannot be opened");
        return 0;
    }
    while(fscanf(fp,"%d",&n)!=EOF)
    {
        sum=sum+n;
    }
    fclose(fp);
    fp=fopen("numbers.txt","a");
    fprintf(fp,"\nsum=%d",sum);
    fclose(fp);
    printf("sum appended successfully");
    return 0;
}
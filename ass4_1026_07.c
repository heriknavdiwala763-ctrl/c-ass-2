#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char filename[50];
    char lines[200][200];
    int offset,total=0,i;
    printf("enter filename :: ");
    scanf("%s",filename);
    printf("enter offset value :: ");
    scanf("%d",&offset);
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("file cannot be opened");
        return 0;
    }
    while(fgets(lines[total],200,fp)!=NULL)
    {
        total++;
    }
    fclose(fp);
    if(offset>0)
    {
        for(i=offset;i<total;i++)
        {
            printf("%s",lines[i]);
        }
    }
    else if(offset<0)
    {
        for(i=total+offset;i<total;i++)
        {
            printf("%s",lines[i]);
        }
    }
        else
        {
            for(i=0;i<total;i++)
            {
                printf("%s",lines[i]);
            }
        }
    return 0;
}
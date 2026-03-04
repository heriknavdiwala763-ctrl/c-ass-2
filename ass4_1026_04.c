#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    int ch;
    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","a");
    if(fp1==NULL || fp2==NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    printf("File appended successfully\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
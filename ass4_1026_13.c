#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened\n");
        return 0;
    }

    printf("Character\tASCII Value\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c\t\t%d\n", ch, ch);
    }

    fclose(fp);
    return 0;
}
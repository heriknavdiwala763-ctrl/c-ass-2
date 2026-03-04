#include <stdio.h>

int main()
{
    FILE *fs, *ft;
    char sname[50], tname[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sname);

    printf("Enter target file name: ");
    scanf("%s", tname);

    fs = fopen(sname, "r");
    if (fs == NULL)
    {
        printf("Source file cannot be opened");
        return 0;
    }

    ft = fopen(tname, "w");
    if (ft == NULL)
    {
        printf("Target file cannot be opened");
        fclose(fs);
        return 0;
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, ft);
    }

    printf("File copied successfully");

    fclose(fs);
    fclose(ft);

    return 0;
}
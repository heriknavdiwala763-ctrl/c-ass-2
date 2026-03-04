#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
    fp3 = fopen("file3.txt", "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);

    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    printf("Files concatenated successfully\n");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
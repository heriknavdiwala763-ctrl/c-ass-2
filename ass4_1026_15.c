#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int num;

    fp1 = fopen("numbers.txt", "r");
    fp2 = fopen("square.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File error\n");
        return 0;
    }

    while (fscanf(fp1, "%d", &num) != EOF)
    {
        fprintf(fp2, "%d\n", num * num);
    }

    printf("Squares written successfully\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
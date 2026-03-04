#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int a[10], i, n = 0;

    fp1 = fopen("num.txt", "r");
    while ((a[n] = getw(fp1)) != EOF)
        n++;
    fclose(fp1);

    fp2 = fopen("rev.txt", "w");
    for (i = n - 1; i >= 0; i--)
        putw(a[i], fp2);

    fclose(fp2);
    return 0;
}
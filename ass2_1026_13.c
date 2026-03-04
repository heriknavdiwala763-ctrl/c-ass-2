#include <stdio.h>

int main()
{
    int a[10][10], i, j, m, n;
    float rsum, csum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Row averages:\n");
    for (i = 0; i < m; i++)
    {
        rsum = 0;
        for (j = 0; j < n; j++)
            rsum += a[i][j];
        printf("%.2f\n", rsum / n);
    }

    printf("Column averages:\n");
    for (j = 0; j < n; j++)
    {
        csum = 0;
        for (i = 0; i < m; i++)
            csum += a[i][j];
        printf("%.2f\n", csum / m);
    }

    return 0;
}
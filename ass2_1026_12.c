#include <stdio.h>

void multiply(int a[10][10], int b[10][10], int c[10][10], int m, int n, int p)
{
    int i, j, k;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, m, n, p;

    printf("Enter rows and columns of first matrix :: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of second matrix :: ");
    scanf("%d", &p);
    printf("\nenter first matrix :: ");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("\nenter second matrix :: ");
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &b[i][j]);

    multiply(a, b, c, m, n, p);

    printf("Result matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
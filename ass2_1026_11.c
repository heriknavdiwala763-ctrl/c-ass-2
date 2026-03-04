#include <stdio.h>

void largest(int a[10][10], int m, int n)
{
    int i, j, max;

    max = a[0][0];

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] > max)
                max = a[i][j];

    printf("Largest element = %d", max);
}

int main()
{
    int a[10][10], i, j, m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("\nenter matrix elements :: ");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    largest(a, m, n);

    return 0;
}
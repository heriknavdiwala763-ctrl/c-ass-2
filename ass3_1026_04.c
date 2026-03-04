#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;
    int *p, *q, *r;

    p = &a[0][0];
    q = &b[0][0];
    r = &c[0][0];

    printf("Enter first matrix:\n");
    for (i = 0; i < 9; i++)
    {
        scanf("%d", p + i);
    }

    printf("Enter second matrix:\n");
    for (i = 0; i < 9; i++)
    {
        scanf("%d", q + i);
    }

    for (i = 0; i < 9; i++)
    {
        *(r + i) = *(p + i) + *(q + i);
    }

    printf("Result matrix:\n");
    for (i = 0; i < 9; i++)
    {
        printf("%d ", *(r + i));
        if ((i + 1) % 3 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
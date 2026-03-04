#include <stdio.h>

int compare(int *a, int *b, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (*(a + i) != *(b + i))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[5], b[5];
    int i;

    printf("Enter first array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter second array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    if (compare(a, b, 5))
    {
        printf("Arrays are identical");
    }
    else
    {
        printf("Arrays are not identical");
    }

    return 0;
}
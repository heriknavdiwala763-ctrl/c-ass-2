#include <stdio.h>

int main()
{
    int a[10];
    int n, i, val, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++)
    {
        if (val < a[i])
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = val;
    n++;

    printf("New array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
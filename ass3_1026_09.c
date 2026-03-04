#include <stdio.h>

void reverse(int *p, int n)
{
    int i, t;

    for (i = 0; i < n / 2; i++)
    {
        t = *(p + i);
        *(p + i) = *(p + n - i - 1);
        *(p + n - i - 1) = t;
    }
}

int main()
{
    int a[10], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("elements are :: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        getchar();
    }

    reverse(a, n);

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
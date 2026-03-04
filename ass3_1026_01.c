#include <stdio.h>

int main()
{
    int a[10];
    int n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = a;   /* pointer points to array */

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}
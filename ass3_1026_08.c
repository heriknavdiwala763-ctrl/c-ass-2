#include <stdio.h>

int main()
{
    int a[10];
    int n, i, key;
    int *p;
    int low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = a;
    printf("elements are :: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &*(p + i));
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (*(p + mid) == key)
        {
            printf("Element found");
            return 0;
        }
        else if (*(p + mid) < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}
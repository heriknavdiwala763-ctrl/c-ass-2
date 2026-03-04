#include <stdio.h>

void sort(int a[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }}
}

int main()
{
    int a[5], b[5], c[10];
    int i,size;
    printf("enter size of first array :: ");
    scanf("%d",&size);
    printf("enter elements of first array :: ");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    printf("enter size of second array :: ");
    scanf("%d",&size);
    printf("enter elements of second array :: ");
    for (i = 0; i < size; i++)
        scanf("%d", &b[i]);

    sort(a, size);
    sort(b, size);
    for (i = 0; i < size; i++)
    {
        c[i] = a[i];
        c[i + size] = b[i];
    }

    sort(c, 2 * size);

    printf("Merged sorted array:\n");
    for (i = 0; i < 2 * size; i++)
        printf("%d ", c[i]);

    return 0;
}
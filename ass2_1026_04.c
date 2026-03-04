#include <stdio.h>

float poly(float a[], int n, float x)
{
    float p = a[0];
    int i;

    for (i = 1; i <= n; i++)
        p = p * x + a[i];

    return p;
}

int main()
{
    float a[5] = {1, 2, 3, 4};
    float x = 2;

    printf("Value = %.2f", poly(a, 3, x));

    return 0;
}
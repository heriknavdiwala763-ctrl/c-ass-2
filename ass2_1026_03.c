#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

float power(float x, int n)
{
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main()
{
    float x, f;

    x = 2;
    f = x - power(x,3)/fact(3) + power(x,5)/fact(5);

    printf("Result = %.2f", f);

    return 0;
}
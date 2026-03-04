#include <stdio.h>

/* Function to calculate perimeter */
float perimeter(float a, float b, float c)
{
    return a + b + c;
}

int main()
{
    float a, b, c, p;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    p = perimeter(a, b, c);

    printf("Perimeter of triangle = %.2f", p);

    return 0;
}
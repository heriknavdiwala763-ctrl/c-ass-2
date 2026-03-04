#include <stdio.h>
#include <math.h>

void roots(float a, float b, float c, float *x1, float *x2)
{
    float d;

    d = (b*b - 4*a*c);

    *x1 = (-b + d)/(2*a);
    *x2 = (-b - d)/(2*a);
}

int main()
{
    float a,b,c,r1,r2;

    printf("Enter a b c: ");
    scanf("%f %f %f",&a,&b,&c);

    roots(a,b,c,&r1,&r2);

    printf("Roots are: %.2f %.2f",r1,r2);

    return 0;
}
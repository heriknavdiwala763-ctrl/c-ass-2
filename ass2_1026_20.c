#include<stdio.h>
#include<math.h>

float roundToTwoDecimals(float x)
{
    return round(x * 100) / 100.0;
}

int main()
{
    float value = 123.4567;
    float rounded = roundToTwoDecimals(value);
    printf("Original: %.4f\n", value);
    printf("Rounded: %.2f\n", rounded);
    return 0;
}
#include <stdio.h>

float round2(float x)
{
    return (int)(x * 100 + 0.5) / 100.0;
}

int main()
{
    float x = 17.457;

    printf("Rounded value = %.2f", round2(x));

    return 0;
}
#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divi(int a, int b) { return (float)a / b; }

int main()
{
    int a, b, ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n\t1.Add");
    printf("\n\t2.Subtract");
    printf("\n\t3.Multiply");
    printf("\n\t4.Divide");
    printf("\n\nEnter your choice: ");
    scanf("%d", &ch);

    if (ch == 1) printf("Result = %d", add(a,b));
    if (ch == 2) printf("Result = %d", sub(a,b));
    if (ch == 3) printf("Result = %d", mul(a,b));
    if (ch == 4) printf("Result = %.2f", divi(a,b));

    return 0;
}
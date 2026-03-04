#include <stdio.h>

int main()
{
    FILE *fp;
    int pcode, qty;
    float cost, total = 0, value;

    fp = fopen("product.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 0;
    }

    printf("Product Details:\n");
    printf("Code\tCost\tQuantity\tValue\n");

    while (fscanf(fp, "%d %f %d", &pcode, &cost, &qty) != EOF)
    {
        value = cost * qty;
        total = total + value;

        printf("%d\t%.2f\t%d\t\t%.2f\n", pcode, cost, qty, value);
    }

    fclose(fp);

    printf("\nTotal value of all five products = %.2f\n", total);

    return 0;
}
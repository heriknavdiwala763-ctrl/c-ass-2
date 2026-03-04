#include <stdio.h>

struct product
{
    int code;
    float cost;
    int qty;
};

int main()
{
    FILE *fp;
    struct product p;
    int i, search;

    fp = fopen("product.dat", "wb");

    for (i = 0; i < 5; i++)
    {
        printf("Enter code, cost, qty: ");
        scanf("%d %f %d", &p.code, &p.cost, &p.qty);
        fwrite(&p, sizeof(p), 1, fp);
    }
    fclose(fp);

    fp = fopen("product.dat", "rb");

    printf("\nAlternate products:\n");
    for (i = 0; i < 5; i++)
    {
        fread(&p, sizeof(p), 1, fp);
        if (i % 2 == 0)
            printf("%d %.2f %d\n", p.code, p.cost, p.qty);
    }

    printf("\nEnter product code to search: ");
    scanf("%d", &search);

    rewind(fp);
    while (fread(&p, sizeof(p), 1, fp))
    {
        if (p.code == search)
            printf("Found: %d %.2f %d", p.code, p.cost, p.qty);
    }

    fclose(fp);
    return 0;
}
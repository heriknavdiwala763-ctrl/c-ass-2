#include<stdio.h>
struct product
{
    int pcode;
    float cost;
    int quantity;
};
int main()
{
    FILE *fp=fopen("product.txt","w");
    struct product p;
    int i,n;
    if(fp==NULL)
    {
        printf("file cannot be opened");
        return 0;
    }
    printf("enter number of products :: ");
    scanf("%d",&n);
    if(n<=5)
    {
        printf("please enter more than 5 products");
        fclose(fp);
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        printf("enter details of product %d\n",i);
        printf("enter product code :: ");
        scanf("%d",&p.pcode);
        printf("enter cost :: ");
        scanf("%f",&p.cost);
        printf("enter quantity :: ");
        scanf("%d",&p.quantity);
        fprintf(fp,"%d %f %d\n",p.pcode,p.cost,p.quantity);
    }
    fclose(fp);
    printf("product details stored successfully\n");
    return 0;
}
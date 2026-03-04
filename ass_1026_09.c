#include<stdio.h>
#define MAX 100
struct vector
{
    int arr[MAX];
    int size;
};
void createvector(struct vector *v);
void modifyelements(struct vector *v);
void multiplybyscalar(struct vector *v, int scalar);
void displayvector(struct vector v);
int main()
{
    struct vector v;
    int scalar;
    createvector(&v);
    displayvector(v);
    modifyelements(&v);
    displayvector(v);
    printf("Enter scalar value :: ");
    scanf("%d", &scalar);
    multiplybyscalar(&v, scalar);
    displayvector(v);
    return 0;
}
void createvector(struct vector *v)
{
    int i;
    printf("Enter size of vector :: ");
    scanf("%d", &v->size);
    getchar();
    printf("Enter %d elements :: ", v->size);
    getchar();
    for(i = 0; i < v->size; i++)
    {
        printf("enter Element %d :: ", i + 1);
        scanf("%d", &v->arr[i]);
    }
}
void displayvector(struct vector v)
{
    int i;
    printf("Vector elements are :: ");
    for(i = 0; i < v.size; i++)
    {
        printf("%d ", v.arr[i]);
    }
    printf("\n");
}
void modifyelements(struct vector *v)
{
    int i;
    for(i=0; i < v->size; i++)
    {
        v->arr[i] += 1;
    }
}
void multiplybyscalar(struct vector *v, int scalar)
{
    int i;
    for(i = 0; i < v->size; i++)
    {
        v->arr[i] *= scalar;
    }
}
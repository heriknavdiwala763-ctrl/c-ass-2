#include<stdio.h>
struct sample
{
    int a;
    float b;
    char c;
};
union sample_union
{
    int a;
    float b;
    char c;
};
int main()
{
    printf("size of structure=%lubytes\n", sizeof(struct sample));
    printf("size of union=%lubytes\n",sizeof(union sample_union));
    return 0;
}
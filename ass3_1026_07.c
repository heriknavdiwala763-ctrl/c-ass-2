#include <stdio.h>
#include <string.h>

void swap(char a[20], char b[20])
{
    char t[20];
    strcpy(t, a);
    strcpy(a, b);
    strcpy(b, t);
}

int main()
{
    char name[3][20];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("enter name ::");
        scanf("%s", name[i]);
    }

    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                swap(name[i], name[j]);
            }
        }
    }

    printf("Sorted names:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
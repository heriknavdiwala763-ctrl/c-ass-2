#include <stdio.h>

void insert(char *s1, char *s2, int pos)
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
    {
    }

    for (j = i; j >= pos; j--)
    {
        s1[j + 1] = s1[j];
    }

    for (j = 0; s2[j] != '\0'; j++)
    {
        s1[pos + j] = s2[j];
    }
}

int main()
{
    char s1[50], s2[20];
    int pos;

    printf("Enter main string: ");
    gets(s1);

    printf("Enter substring: ");
    gets(s2);

    printf("Enter position: ");
    scanf("%d", &pos);

    insert(s1, s2, pos);

    printf("Result string: %s", s1);

    return 0;
}
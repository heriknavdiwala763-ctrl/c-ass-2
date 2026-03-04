#include <stdio.h>

void copy(char a[], char b[])
{
    int i = 0;
    while (b[i] != '\0')
    {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';
}

int compare(char a[], char b[])
{
    int i = 0;
    while (a[i] == b[i])
    {
        if (a[i] == '\0')
            return 0;
        i++;
    }
    return a[i] - b[i];
}

void concat(char a[], char b[])
{
    int i = 0, j = 0;
    while (a[i] != '\0')
        i++;
    while (b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
}

int main()
{
    char a[50], b[20];
    printf("Enter first string: ");
    scanf("%s",a);
    printf("Enter second string: ");
    scanf("%s",b);

    concat(a, b);
    printf("After concat: %s", a);

    return 0;
}
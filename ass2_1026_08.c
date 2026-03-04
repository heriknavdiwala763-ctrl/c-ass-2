#include <stdio.h>

void upper(char str[])
{
    int i;
    for(i=0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}

int main()
{
    char str[20];

    printf("Enter string: ");
    scanf("%s", str);
    upper(str);
    printf("Uppercase = %s", str);

    return 0;
}
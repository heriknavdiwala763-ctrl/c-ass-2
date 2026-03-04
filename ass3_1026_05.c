#include <stdio.h>

void remove_char(char *s, char ch)
{
    int i, j = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ch)
        {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}

int main()
{
    char s[50], ch;

    printf("Enter string: ");
    scanf("%s", s);

    printf("Enter character to delete: ");
    scanf(" %c", &ch);

    remove_char(s, ch);

    printf("Result string: %s", s);

    return 0;
}
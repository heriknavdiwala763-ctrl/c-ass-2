#include <stdio.h>

int find(char s[], char ch)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ch)
            return 1;
        i++;
    }
    return 0;
}

int main()
{
    char s[20], ch;
    printf("Enter a string and a character to find: ");
    scanf("%s %c", s, &ch);

    if (find(s, ch))
        printf("Character found");
    else
        printf("Character not found");

    return 0;
}
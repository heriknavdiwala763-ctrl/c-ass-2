#include <stdio.h>
#include <string.h>

void locate(char s1[], char s2[], int m)
{
    int i;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Shift characters of s1 to the right
    for (i = len1; i > m; i--)
    {
        s1[i + len2] = s1[i];
    }

    // Insert s2 into s1
    for (i = 0; i < len2; i++)
    {
        s1[m + 1 + i] = s2[i];
    }
}

int main()
{
    char s1[100] = "I am student";
    char s2[20] = " a";
    int m = 3;

    locate(s1, s2, m);

    printf("Resulting string: %s", s1);

    return 0;
}
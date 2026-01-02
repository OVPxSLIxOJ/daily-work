#include <stdio.h>
int main()
{
    char b[10000] = { 0 };
    char a[100][100] = { 0 };
    int i = 0;
    int j = 0;
    int c = 0;
    fgets(b, 10000, stdin);
    while (b[i] != '\0' && b[i] != '\n')  // Also check for newline
    {
        while (b[i] == ' ')
        {
            i++;
        }
        j = 0;
        while (b[i] != ' ' && b[i] != '\0' && b[i] != '\n')
        {
            a[c][j] = b[i];
            i++;
            j++;
        }
        if (j != 0)  // Only if we actually read a word
        {
            a[c][j] = '\0';  // Null-terminate once
            c++;              // Move to next word once
        }
    }
    for (i = c - 1; i >= 0; i--)
    {
        printf("%s", a[i]);
        if (i != 0)
        {
            printf(" ");
        }
    }
    return 0;
}
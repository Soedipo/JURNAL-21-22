#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char text[50], alphabet, temp;

    printf("Text = ");
    gets(text);
    n = strlen(text);

    for (i = 0; i <= n - 1; i++)
    {
        alphabet = text[i];
        for (j = i + 1; j <= n - 1; j++)
        {
            if (alphabet > text[j])
            {
                temp = alphabet;
                alphabet = text[j];
                text[j] = temp;
            }
        }
        if (alphabet != ' ')
            printf("%c ", alphabet);
    }
}
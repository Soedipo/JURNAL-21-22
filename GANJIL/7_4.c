#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    int i, j, n;
    char text[50], alphabet, temp;

    printf("Text = ");
    gets(text);
    n = strlen(text) - 1;

    for (i = 0; i <= n; i++)
    {
        alphabet = text[i];
        for (j = i + 1; j <= n; j++)
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
    getch();
}
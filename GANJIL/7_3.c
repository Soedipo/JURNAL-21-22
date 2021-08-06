#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index[100];
    int i, j, n, tahu;

    printf("Bubble Sort Descending\n");
    printf("Banyak data : ");
    scanf("%d", &n);
    for (i = 0; i <= n - 1; i++)
    {
        printf("Data ke-%d : ", i + 1);
        scanf("%d", &index[i]);
    }

    for (i = n - 1; i >= 1; i--) //(A). Lengkapi syntax (update statement)
    {
        for (j = 1; j <= i; j++)
        {
            if (index[j - 1] < index[j]) //(B). Lengkapi syntax (variable)
            {
                tahu = index[j - 1]; //(C). Lengkapi oeparsi
                index[j - 1] = index[j];
                index[j] = tahu;
            }
        }
    }

    printf("\nHasil Sorting :\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d", index[i]); //(D). Lengkapi varibel
        printf(" ");
    }

    return 0;
}
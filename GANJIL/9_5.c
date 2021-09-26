#include <stdio.h>
void kotak(int n);

int max;

int main()
{
    int n;

    printf("Jumlah baris = ");
    scanf("%d", &n);
    max = n;
    kotak(n);
    getch();
    return 0;
}

void kotak(int a)
{
    if ((a == 1 || a == max) && a != 0)
    {
        printf("##########\n");
    }

    else if (a > 1 && a != max)
    {
        printf("#        #\n");
    }

    kotak(a - 1);
}
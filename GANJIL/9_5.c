#include <stdio.h>
#include <stdlib.h>
void kotak(int n);

int max;

int main()
{
    int n;

    printf("Jumlah baris = ");
    scanf("%d", &n);
    max = n;
    kotak(n);
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
    else if (a == 0){
        getch();
    }
    kotak(a - 1);
}
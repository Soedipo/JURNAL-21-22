//Program data Asisten
#include <stdio.h>
#include <stdlib.h>

struct
{ //Lengkapi sintaks
    char lab[50], kode[20];
} data[100];

void input(int a)
{
    if (a > 0)
    {
        printf("\nAsal Lab : ");
        gets(data[a].lab);
        printf("Kode Assisten : ");
        gets(data[a].kode);
        a = a - 1;
        input(a); //Lengkapi Rekurens
    }
}

void output(int b)
{
    if (b > 0)
    {
        printf("\n%s - %s ", data[b].lab, data[b].kode);
        b = b - 1;
        output(b);
    }
}

int main()
{
    int ba;
    printf("Data Asisten\n");
    printf("Masukkan Banyak Asisten : ");

    scanf("%d", &ba);
    getchar();

    input(ba); // Isi parameternya
    output(ba);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void NameSearch(char t[30], int n);
void ShapeSearch(char t[30], int n);

struct
{
    char name[30], bolu[30];
} pesan[50];

int main()
{
    char cari[30];
    int count, i, pilih;

    printf("Jumlah pemesan: ");
    scanf("%d", &count);
    printf("\n");
    getchar();
    //INPUT
    for (i = 0; i < count; i++)
    {
        printf("%d.\tNama\t: ", i + 1);
        gets(pesan[i].name);
        printf("\tBolu\t: ");
        gets(pesan[i].bolu);
        printf("\n");
    }

    printf("Pilihan pencarian: \n"
           "1. Nama pemesan\n"
           "2. Bentuk bolu\n"
           "Pilih: ");
    scanf("%d", &pilih);
    getchar();
    switch (pilih)
    {
    case 1:
        printf("Masukkan nama: ");
        gets(cari);
        NameSearch(cari, count);
        break;
    case 2:
        printf("Masukkan bentuk bolu: ");
        gets(cari);
        ShapeSearch(cari, count);
        break;
    default:
        printf("Pilihan tidak tersedia");
        break;
    }
}

void NameSearch(char t[30], int n)
{
    int x = 1, j, found;
    for (j = 0; j < n; j++)
    {
        if (strcmp(t, pesan[j].name) == 0)
        {
            printf("%d.\tNama\t\t: %s\n", x, pesan[j].name);
            printf("\tNIM\t\t: %s\n\n", pesan[j].bolu);
            found = 1; x++;
        }
    }
    if (found == 0)
        printf("\nData tidak ditemukan");
}

void ShapeSearch(char t[30], int n)
{
    int x = 1, j, found;
    for (j = 0; j < n; j++)
    {
        if (strcmp(t, pesan[j].bolu) == 0)
        {
            printf("%d.\tNama\t\t: %s\n", x, pesan[j].name);
            printf("\tNIM\t\t: %s\n\n", pesan[j].bolu);
            found = 1; x++;
        }
    }
    if (found == 0)
        printf("\nData tidak ditemukan");

    return 0;        
}
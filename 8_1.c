//Sequential search
#include <stdio.h>
int main()
{
    char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}, cari;
    int i = 0;
    printf("Huruf yang dicari : ");
    scanf("%c", &cari);
    while (i < 10 && a[i] != cari) //Lengkapi (A). operasi boolean dan (B). variabelnya
    { 
        i++;
    }
    if (a[i] ==  cari) //(C). Lengkapi operasi boolean-nya
    {
        printf("Data ditemukan di indeks ke-%d", i);
    }
    else
    {
        printf("Data tidak ditemukan");
    }
}

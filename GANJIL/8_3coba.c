//Program searching data mahasiswa berdasarkan nama 
#include<stdio.h>
#include <string.h>
int main()
{
    struct
    {
        char nama[50], nim[50], kelas[50], jurusan[50];
    } a[50];
    int i, n, found = 0;
    char cari[50];
    //Proses input data
    printf("Jumlah input data : ");
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        printf("%d. Nama\t\t: ", i + 1);
        gets(a[i].nama);
        printf(" NIM\t\t: ");
        gets(a[i].nim);
        printf(" Kelas\t: ");
        gets(a[i].kelas);
        printf(" Jurusan\t: ");
        gets(a[i].jurusan);
    }
    //Proses searching
    printf("Nama yang dicari : ");
    gets(cari); //Lengkapi variabelnya
    i = 0;
    while (i < n && strcmp(a[i].nama, cari)!= 0)
    { //Lengkapi operasi booleannya

        i++;
    }
    if (strcmp(cari, a[i].nama)==0)
    { //Lengkapi operasi boolean-nya
        printf("%d. Nama\t\t: %s\n", i + 1, a[i].nama);
        printf("  NIM\t\t: %s\n", a[i].nim);
        printf(" Kelas\t: %s\n", a[i].kelas);
        printf(" Jurusan\t: %s\n", a[i].jurusan);
    }
    else
    {

        printf("Data tidak ditemukan");
    }
}

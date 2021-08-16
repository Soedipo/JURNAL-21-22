//Program writing biner untuk pendataan buku
#include <stdio.h>
struct
{
    char name[50], bentuk[50];
    int harga;
} a;

int i, n;
void main()
{
    FILE *pesanan;
    pesanan = fopen("List Pesanan.dat", "wb"); //(A). Tentukan modenya
    printf("Banyak buku : ");
    scanf("%d", &n);
    getchar();
    for (i = 1; i <= n; i++)
    {
        printf("%d.\tNama Pemesan\t: ", i);
        gets(a.name);
        printf("\tBentuk bolu\t: ");
        gets(a.bentuk);
        printf("\tHarga\t\t: ");
        scanf("%d", &a.harga);
        getchar();
        fwrite(&a, sizeof(a), 1, pesanan); //(B). Tentukan sintaksnya
    }
    
    fclose(pesanan); //(C). Lengkapi sintaksnya
}
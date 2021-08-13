//Program reading biner untuk pendataan buku
#include <stdio.h>
struct
{
    char who[50], shape[50];
    int bayar;
} b;
int a, n;
void main()
{
    int a = 1;
    FILE *list; //(A). Lengkapi strukturnya
    list = fopen("List Pesanan.dat", "rb"); //(B). Tentukan mode nya
    while (fread(&b, sizeof(b), 1, list) == 1) // Tentukan (C). sintaks dan (D). lengkapi
    {
        printf("%d.\tNama Pemesan\t: %s\n", a, b.who);
        printf("\tBentuk bolu\t: %s\n", b.shape);
        printf("\tHarga\t\t: %d\n\n", b.bayar);
        a++;
    }
    fclose(list); 
}

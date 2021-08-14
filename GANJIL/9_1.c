//Program Perkalian
#include <stdio.h>

int perkalian(int n);
int a, b, hasil;

int main()
{
    printf("Masukkan bilangan yang dikali : ");
    scanf("%d", &a);
    printf("Masukkan bilangan pengali :");
    scanf("%d", &b);
    hasil = perkalian(b); //lengkapi pemanggilan fungsinya
    printf("%d * %d = %d", a, b, hasil);
    return 0;
}

int perkalian(int n)
{
    if (n == 0)
        return 0;
    else if (n > 0)
    { //Lengkapi basisnya
        return a + perkalian(n - 1);
    } //Tentukan rekursinya
    else if (n < 0)
    { //Lengkapi basisnya
        return -a + perkalian(n + 1);
    }
}
#include<stdio.h>

int main(){
	int jumlah;
	char nama[20], Barang[40], toko[20], review; //Tentukan variabe
//Input
	printf("Nama Pembeli\t\t\t: ");
	gets(nama); //Tentukan variabelnya 
	printf("Nama Toko\t\t\t: ");
	gets(toko);
	printf("Nama Barang\t\t\t: ");
	gets(Barang); //Lengkapi sintaksnya
	printf("Skor Pelayanan Toko (Skala A-E)\t: ");
	scanf("%c", &review);
	
//Output
	printf("\nOUTPUT\n");
	printf("Nama Pembeli\t\t\t: %s	\n", nama); //Tentukan formatnya 
	printf("Nama Toko\t\t\t: %s\n", toko); //Tentukan variabelnya 
	printf("Nama Barang\t\t\t: %s\n", 	Barang);
	printf("Skor Pelayanan Toko (Skala A-E)\t: %c", review); //Tentukan formatnya
	getchar();
}
#include<stdio.h>

int main(){
	char Barang[40]; //Tentukan variabel
	float harga, totalharga;
	int jumlah;

//Input
	printf("Nama Barang\t: ");
	gets(Barang); //Tentukan sintaks
	printf("Harga\t\t: Rp");
	scanf("%f", &harga);
	printf("Jumlah barang\t: ");
	scanf("%d", &jumlah); //Tentukan format

//Operasi Hitung
	totalharga = harga*jumlah;

//Output
	printf("\nOUTPUT\n");
	printf("Nama Barang\t: %s	\n", Barang); //Tentukan formatnya 
	printf("Total harga\t: Rp%f\n", totalharga);//Tentukan formatnya
	getch();
	return 0;
}
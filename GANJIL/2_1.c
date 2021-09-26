//Program aritmatika bilangan bulat 
#include<stdio.h>

int main(){
int angka1, angka2, angka3, hasil; 
printf("Masukan angka pertama : ");
scanf("%d", &angka1); 
printf("Masukan angka kedua : "); 
scanf("	%d", &angka2	); //tentukan formatnya 
printf("Masukan angka ketiga : "); 
scanf("%d", &angka3); //Tentukan variabelnya
hasil = (angka1+angka2)/angka3; //Tentukan variabel hasil dari penjumlahan

//Output 
printf("\n(%d + %d)/%d = %d \n",angka1, angka2, angka3, hasil);
getchar();
}


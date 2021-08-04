#include <stdio.h>

int deret(int x){ //Tentukan (A)tipe fungsi dan (B)parameter aktual 
	int i, angka=2, jumlah=0;
	for(i=0;i<x;i++){
		jumlah=jumlah+angka;
	}
	return jumlah; 
}

int main(){
	int baris;
	printf("Jumlah Baris = ");
	scanf("%d", &baris);
	printf("Jumlah deret = %d", deret(baris)); ////(C). Tentukan parameter 
	return 0;
}

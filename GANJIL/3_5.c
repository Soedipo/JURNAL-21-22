#include <stdio.h>
int main(){
//Input
	int celcius, n;
	float reamur, farenheit;
	printf("Suhu(C) = "); scanf("%d", &celcius);
	printf("Menu Konversi :\n"
			"1. Reamur\n"
			"2. Farenheit\n");
	printf("Pilih = "); scanf ("%d", &n); printf("\n");
//Proses Output
	switch(n){
		case 1:{
			reamur = (4.0/5.0)*celcius;
			printf("Reamur = %.2f R", reamur);
			break;
		}
		case 2:{
			farenheit = (celcius*(9.0/5.0))+32;
			printf("Faernheit = %.2f F", farenheit);
			break;
		}
	}
}

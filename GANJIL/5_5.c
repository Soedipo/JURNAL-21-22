#include <stdio.h>
#define PHI 3.14
int Rect();
int Triangle();
int Circle();

int main(){
	int pilih, harga;
//INPUT
	printf("Pilihan Bentuk: \n");
	printf("1. Lingkaran\n"
		   "2. Segitiga\n"
		   "3. Persegi\n"
		   "Pilih: ");
	scanf("%d", &pilih);
//OUTPUT
	switch(pilih){
		case 1:{
			harga = Circle()*200;
			printf("Rp%d", harga);
			break;
		}
		case 2:{
			harga = Triangle()*200;
			printf("Rp%d", harga);
			break;
		}
		case 3:{
			harga = Rect()*200;
			printf("Rp%d", harga);
			break;
		}
	} getch();
}

int Circle(){
	int d; float A;
	printf("Diameter: ");
	scanf("%d", &d);
	A = PHI*(d/2.0)*(d/2.0);
	return A;
}

int Triangle(){
	int t, a; float A;
	printf("Alas: ");
	scanf("%d", &a);
	printf("Tinggi: ");
	scanf("%d", &t);
	A = (0.5)*a*t;
	return A;
}

int Rect(){
	int s; float A;
	printf("Sisi: ");
	scanf("%d", &s);
	A = s*s;
	return A;
}

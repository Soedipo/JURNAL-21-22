#include <stdio.h>
#define phi 3.14

int main(){
	struct{
		int diameter;
		float area;
		char name[30], address[150], TelNumber[20];	
	}form;
	
//Input
	printf("Nama\t\t= "); gets(form.name);
	printf("Alamat\t\t= "); gets(form.address);
	printf("Nomor Telepon\t= "); gets(form.TelNumber);
	printf("Diameter Bolu\t= "); scanf("%d", &form.diameter);
//Perhitungan
	form.area = (form.diameter/2)*(form.diameter/2)*phi;

//Output
	printf("\n-------OUTPUT-------\n");
	printf("Nama\t\t= %s\n", form.name);
	printf("Alamat\t\t= %s\n", form.address);
	printf("Nomor Telepon\t= %s\n", form.TelNumber);
	printf("Diameter Bolu\t= %d cm\n", form.diameter);
	printf("Luas Bolu\t= %.2f cm^2", form.area);
	getchar();
}

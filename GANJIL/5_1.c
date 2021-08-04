//Program menampilkan output dari prosedur
#include <stdio.h>
#include <stdlib.h>
int i;
void Aiyooo(); //(A). Prototype fungsi

void main()
{
	Aiyooo(); //(B). Lengkapi pemanggilan fungsi 
}

void Aiyooo() //(C). Tentukan identifier
{
	for(i=3;i>=1;i--){
		printf("\n\t%d\n", i);
		sleep(1); system("cls");
	}
	printf("\n\tSelamat Datang di Pertengahan Modul Dasar Komputer ^o^ \n"); 
	printf("\n\t\tSelamat Menikmati dan Terus Semangat!\n\n"); 
	printf("\n\t\t\t<Looping Forever>\n");
}


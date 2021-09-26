//Program Menentukan Indeks Nilai
#include <stdio.h>

int main(){
	int nilai;
	printf ("Nilai = ");
	scanf("%d", &nilai);
	if(0<=nilai && nilai<40){ //(A). Lengkapi operasinya
		printf("C");
	} 
	else if (40<=nilai && nilai<70){//(B). lengkapi sintaks
		printf("B");
	}
	else if(70<=nilai && nilai<=100){
		printf("A");
	}
	else printf("Nilai salah input"); //(C). Lengkapi sintaks
	getchar();
	return 0;
}

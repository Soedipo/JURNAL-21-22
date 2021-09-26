#include <stdio.h>

int main(){
	struct{
			int p, l ,t, v;
	}A, B; char beli;
//Input
	printf("Akuarium A: \n");
	printf("p\t= "); scanf("%d", &A.p);
	printf("l\t= "); scanf("%d", &A.l);
	printf("t\t= "); scanf("%d", &A.t);
	printf("\nAkuarium B: \n");
	printf("p\t= "); scanf("%d", &B.p);
	printf("l\t= "); scanf("%d", &B.l);
	printf("t\t= "); scanf("%d", &B.t);
//Proses
	A.v = A.p*A.l*A.t;
	B.v = B.p*B.l*B.t;
	if(A.v > B.v) beli = 'A'; 
	else beli = 'B';
//Output
	printf("\nVolume Akuarium A: %d\n", A.v);
	printf("Volume Akuarium B: %d\n", B.v);
	if(A.v == B.v) printf("Rayhan bisa membeli diantara keduanya.");
	else printf("Rayhan akan membeli akuarium %c", beli);
	getch();
	return 0;
}

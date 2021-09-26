#include <stdio.h>
#define phi 3.14

int main(){
	float d, luas;
	int harga;
//Input
	printf("Diameter= ");
	scanf("%f", &d);
	luas = (d/2)*(d/2)*phi;
	harga = luas*200;
//Output	
	printf("Harga= Rp%d", harga);
	getchar();
}

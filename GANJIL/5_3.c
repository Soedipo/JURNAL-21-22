//Program membandingkan kecepatan dari GLB 2 UFO
#include <stdio.h>

int Kecepatan(int o);

int tA,tB;

void banding() //(A). Tentukan identifier fungsi
{
	int vA, vB;
	vA = Kecepatan(tA); //(B). Tentukan fungsi
	vB = Kecepatan(tB);
	
	if(vA>vB) 
	printf("UFO A lebih cepat daripada UFO B"); 
	else if(vA<vB)
	printf("UFO B lebih cepat daripada UFO A"); 
	else printf("Kecepatan kedua UFO sama");
}

int main()
{
	printf("Jarak benda ke titik tujuan = 15 m\n");
	printf("Masukkan  waktu tempuh masing-masing UFO (s):\n");
	printf("UFO A = "); scanf("%d", &tA); 
	printf("UFO B = "); scanf("%d", &tB);
	printf("\n");
	banding(); //(C). Tentukan fungsi
	
	return 0;
}

int Kecepatan(int o){ //(D). Tentukan parameter
	int s=15;
	return s/o;
}

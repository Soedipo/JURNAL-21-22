//Program menghitung jumlah deret kelipatan 3 ke-n baris
#include<stdio.h> 

int main(){
	int p,e,n,a;
	
	printf("N baris : "); 
	scanf("%d",&n); 
	
	p=3; e=1, a=0;
	do{ //(A)Tentukan sintaksnya
		a=a+p;
		p+=3; //(B). Tentukan variabel
		e++;
	} while(e<=n); //(C). Tentukan sintaksnya
	printf("Jumlah deretnya adalah %d", a); 
}

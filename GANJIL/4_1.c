//Program deret bilangan lipat 3 
#include <stdio.h>

int main(){
	int i,n,a; 
	i=1; a=3;
	printf("Masukan N baris : "); 
	scanf("%d",&n); 
	while(i<= n){ //Tentukan variabelnya
		printf("%d ",a);
		a=a+3; //Tentukan variabelnya 
		i++; //Tentukan operasinya
	}
}


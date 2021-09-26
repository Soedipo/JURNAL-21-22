#include <stdio.h>
void Faktorial(int a);

int main(){
	int n;
//INPUT
	scanf("%d", &n);
	Faktorial(n);
	return 0;
}

void Faktorial(int a){
//PROSES
	int i, hasil=1;
	if(a == 0) hasil = 1; 
	else{
		for(i=a ; i>0 ; i--){
			hasil = hasil*i; 
		}
	}
//OUTPUT
	printf("%d", hasil);
	getch();
}

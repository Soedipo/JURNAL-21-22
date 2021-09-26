#include <stdio.h>

int main(){
	int i, j, n, prime;
	scanf("%d", &n);
	
	if(n>=1 && n<=100){
		for(i=1 ; i<=n ; i++){
			for(j=2 ; j<i ; j++){
				if(i==1) prime = 0; else if(i==2) prime = 1;
				else if(i%j != 0) {
				prime = 1; 
				}
				else if(i%j == 0){
					prime = 0;
					break;
				}			
			}
			if(prime==1) printf("* "); 
			else printf("%d ", i);
		}		
	} else printf("Gagal");
	getchar();
}

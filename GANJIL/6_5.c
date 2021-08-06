#include <stdio.h>
int main(){
	int n, i,j, Num[100], NumArr, Max;
	
	scanf("%d", &n);
	for(NumArr=0; NumArr<n; NumArr++){
		scanf("%d", &Num[NumArr]);
	}
	printf("\n");
	for(NumArr=0; NumArr<n; NumArr++){
		printf("%d ", Num[NumArr]);
	}
	
	Max = Num[0];
	for(i=0; i<n; i++){
		if(Max <= Num[i]) Max = Num[i];
	}
	
	printf ("\n\nMax = %d", Max);
}

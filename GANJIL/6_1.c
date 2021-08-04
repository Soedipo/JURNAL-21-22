//Program pendataan mahasiswa
#include<stdio.h> 
#include<string.h>
int main(){
	int i,n;
	char nama[50][50];
//Input 
	printf("=====INPUT=====\n");
	printf("Jumlah Mahasiswa : "); 
	scanf("%d",&n); 
	getchar();
	for(i=0 ; i<n ; i++){ //Tentukan operasi boolean yang ada pada kondisi 
		printf("%d. ",i+1); 
		gets(nama[i]);//Lengkapi variabel indeksnya
		}
//Output 
	printf("=====OUTPUT=====\n");
	printf("Daftar Mahasiswa FTE : \n");
	for(i=0;i<n;i++){
		printf("%d. %s\n", i+1, nama[i]);//Tentukan variabel 
	}
}


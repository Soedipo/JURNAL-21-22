//Program pembelian buku menggunakan array of struct 
#include<stdio.h>

int main(){
	struct{
		char nama[50], alamat[50]; 
		int hutang;
	}a[100];
	int i,n;
	printf("Jumlah yang Menghutang : "); scanf("%d",&n); getchar();
//Input 
	printf("=====INPUT=====\n");
	for(i=0 ; i<n ; i++){
		printf("%d. Nama Penghutang : ",i+1); 
		gets(a[i].nama); //Lengkapi variabel untuk indeksnya
		printf("   Nominal Hutang : "); 
		scanf("%d",&a[i].hutang); //Tentukan variabelnya
		getchar(); //Tentukan sintaks agar gets() dapat berfungsi kembali
		printf("\n");
	}
//Output
	printf("=====OUTPUT=====\n");
	for(i=0;i<n;i++){
		printf("%d. Nama Orang : %s\n",i+1,a[i].nama);
		printf("   Nominal Hutang : Rp%d\n\n", a[i].hutang); //Lengkapi variabel struct-nya
	}
}


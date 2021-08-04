//Program pengaplikasian array dua dimensi dalam matriks 
#include<stdio.h>
int main(){
	int matriksA[50][50],matriksB[50][50],matriksC[50][50],i,j,n,m; 
	printf("Input jumlah baris : "); scanf("%d",&n);
	printf("Input jumlah kolom : "); scanf("%d",&m); 
	printf("\tMATRIKS A\n");
//INPUT
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Input baris %d kolom %d : ",i+1,j+1); 
			scanf("%d",&matriksA[i][j]); //Tentukan variabel untuk indeksnya
		}
	}printf("\n"); 
	//OUTPUT
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf(" %d\t", 	matriksA[i][j]);//Lengkapi variabelnya
		}
		printf("\n"); //Sintaks untuk pindah ke baris baru
	}
	printf("\tMATRIKS B\n"); printf("\n");
//INPUT
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("Input baris %d kolom %d : ",i+1,j+1); scanf("%d",&matriksB[i][j]);
		}
	} printf("\n");
//OUTPUT
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf(" %d\t", matriksB[i][j]);
	}
	printf("\n");
	}
	 
//Proses Pengurangan
	printf("\tPENGURANGAN MATRIKS A DAN MATRIKS B\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			matriksC[i][j] = matriksA[i][j]	- matriksB[i][j]; //Lengkapi variabelnya untuk mengurangi matriks A dan matriks B
		}
	}
//OUTPUT
	for(i=0;i<n;i++){
		printf("\t\t\t"); 
			for(j=0;j<m;j++){
				printf("%d\t",matriksC[i][j]);
			}
		printf("\n");
	}
}


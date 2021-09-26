#include <stdio.h>
#include <stdlib.h>

struct
{
char nama[50], jurusan[50], alamat[50], Jaket[50]; 
} data; //nama struct 

int main()
{
//Input
	printf("Nama : "); 
	gets(data.nama); //nama struct 
	printf("Jurusan  : "); 
	gets(data.jurusan); //nama variable
	printf("Alamat : "); 	
	gets(data.alamat); //lengkapi sintaksnya 
	printf("Ukuran Jaket : "); 
	gets(data.Jaket);
//Output
	printf("\nPendataan Jaket Angkatan Mahasiswa(i)\n"); 
	printf("\nNama : %s", data.nama); 
	printf("\nJurusan : %s ", data.jurusan); 
	printf("\nAlamat : %s ", data.alamat); 
	printf("\nUkuran Jaket : %s ", data.Jaket);
	getchar();
	return 0;
}
 




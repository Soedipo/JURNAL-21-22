//Program Form Pinjam Buku
#include <stdio.h>
#include <stdlib.h>

int main()

{
	int pil;
	char nama[50], waktu[20];
	printf("\t\tForm Pinjam Buku\n");
	printf("List Buku\n1. Calculus 1 \n2. Sejarah Indonesia\n3. Ensiklopedia\nPilihan : ");
	scanf("%d",&pil); getchar();
	switch (pil) //Tentukan variable switch
	{
		case 1 :
			printf("\nNama Peminjam : "); gets(nama); printf("Lama Peminjaman: "); gets(waktu);
			printf("\nSelamat Menikmati ;)"); break; //Tentukan syntax pemberhenti
		case 2 :
			printf("\nNama Peminjam : "); gets(nama); 
			printf("Lama Peminjaman :"); gets(waktu);
			printf("\nSelamat Menikmati ;)"); break;
		case 3 :
			printf("\nNama Peminjam : "); gets(nama); printf("Lama Peminjaman: "); gets(waktu);
			printf("\nSelamat Menikmati ;)"); break;
		case 4 :
			printf("\nNama Peminjam : "); gets(nama); printf("Lama Peminjaman: "); gets(waktu);
			printf("\nSelamat Menikmati ;)"); break;
		default : //Tentukan syntax case default
			printf("\nVidcon ngak ada :(");
	}
	getchar();
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct{
	char user[20], pass[20];
}a;
int x, n=2;
int main()
{
	printf("Username : ");
	gets(a.user);
	printf ("Password : ");
	gets(a.pass);
	system("cls");
	if(strcmp(a.user, "Daskom")==0 && strcmp(a.pass, "admin")==0)
	{
		printf ("Login berhasil!!");
		x=1;
	}
	else if (x != 1)
	{
		if (n > 0)
		{
			printf ("Login gagal, sisa kesempatan login %d kali\n", n);
			n--; 
			system ("pause");
			main();  
			//printf ("Sisa kesempatan %d kali", n);
		}
		else printf ("Kesempatan login habis");
	}
    getch();
}
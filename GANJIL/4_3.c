#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i,n;
	char jawab[20];
	for(i=3;i>=0;i--){ //(A). Tentukan variabel
		printf("Dimanakah ibukota negara Indonesia??\n");
		printf("Jawab : "); gets(jawab);
		if(strcmp(jawab, "Jakarta")==0 || strcmp(jawab, "jakarta")==0){ //(B). Tentukan operator boolean
			printf("Anda benar\n");
			break;
		} else{ //(C). Tentukan sintaks
			printf("Jawaban anda salah\n");
			if(i>0){
				printf("Kesempatan untuk menjawab %d kali lagi\n",i);
			}
			else{
				printf("Kesempatan untuk menjawab telah habis\n");
			}
		}
	}
}

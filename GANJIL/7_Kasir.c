#include<stdio.h>
#include<string.h>

struct data
{
char nama[50], bolu[20], jur[20], TEMP[99], TEMP2[99];
int harga;
}a[100], temp; int i, j, n;

int main()
{
printf("Jumlah Data : ");
scanf("%d",&n);
 for (i=0;i<=n-1;i++)
 {
 getchar();
 printf("%d.\tNama : ", i+1);   gets(a[i].nama);
 printf("\tBolu :");   gets (a[i].bolu);
 printf ("\tHarga :"); scanf("%d", &a[i].harga);
 }
 
    for (i=0;i<n-1;i++){
        for (j=0;j<=n-1-j;j++)
  		{
        	if (strcmp(a[j].nama, a[j+1].nama) > 0){
                temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
            }
  		}
    }
    
printf("\nData: \n");
   for(i=0;i<=n-1;i++)
    {
        printf("%d.\tNama\t: %s \n", i+1, a[i].nama);
        printf("\tBolu\t: %s \n", a[i].bolu);
        printf("\tHarga\t: %d \n", a[i].harga);
        printf("\n");
    }
}
//Descending
#include <stdio.h>
#include <stdlib.h>

int main (){
    int das[100];
    int i, j, n, max, baju;

    printf("Selection sort\nMasukkan Banyak data : ");
    scanf("%d", &n);
    for (i=0;i<=n-1;i++)
    {
        printf("Data ke-%d : ",i+1);
        scanf("%d",&das[i]);
    }

    printf("\nSebelum : "); 
    for(i=0;i<n;i++){
        printf("%d ",das[i]);
    }

    for (i=0;i<=n-2;i++)
    {
    max = i; //lengkapi syntax (insialisasi pertama nilai ekstrim) 
        for (j=i;j<=n-1;j++){
            if (das[j]>das[max]) //lengkapi syntax (operasi boolean) 
                max = j;
        }
            baju = das[max];
            das[max] =das[i];
            das[i] = baju	; //lengkapi syntax
    }

    printf("\nSetelah : ");
    for (i=0;i<=n-1;i++){
        printf("%d",das[i]);
        printf(" ");
    }
}
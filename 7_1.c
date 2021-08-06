//Ascending
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num[50], abc, i, j, n;
    printf("Insertion sort \nMasukkan banyak data : "); 
    scanf("%d", &n); 
    for(i=0;i<n;i++){
        printf("%d. ", i+1); 
        scanf("%d", &Num[i]);
    } 
    printf("\nSebelum: "); 
    for(i=0;i<n;i++){
        printf("%d ",Num[i]);
        }
    for(i=1;i<n;i++){ 
        abc = Num[i]; //(A). Lengkapi operasi
        j=i-1;
        while( (abc<Num[j]) && (j>=0) ){ //(B). Lengkapi syntax
            Num[j+1]=Num[j]; //(C). Lengkapi operasi
            j=j-1;
        }
        Num[j+1] = abc; 
    }

    printf("\nSetelah : "); 
    for(i=0;i<n;i++){
        printf("%d ",Num[i]);} 
        printf("\n");
}

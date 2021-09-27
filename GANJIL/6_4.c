#include <stdio.h>
int main(){
	int n, i,j, Num[100], NumArr, Max;
	
	scanf("%d", &n);
	for(NumArr=0; NumArr<n; NumArr++){
		scanf("%d", &Num[NumArr]);
	}
	printf("\n");
	for(NumArr=0; NumArr<n; NumArr++){
		printf("%d ", Num[NumArr]);
	}
	
	Max = Num[0];
	for(i=0; i<n; i++){
		if(Max <= Num[i]) Max = Num[i];
	}
	
	printf ("\n\nMax = %d", Max);
	getch();
}
// #include <stdio.h>

// int main(){
//     int n, total=0, itemArr;
//     struct{
//         int harga;
//         char item[30];
//     }kasir[30];
        
//     printf("---KASIR--- \n");
//     printf("Total Barang: "); scanf("%d", &n);

// // INPUT
//     for(itemArr=0 ; itemArr<n ; itemArr++){
//         getchar();
//         printf("%d. Nama Barang\t: ", itemArr+1);
//         gets(kasir[itemArr].item);
//         printf("   Harga\t: ");
//         scanf("%d", &kasir[itemArr].harga); 
//         printf("\n");
//     }

// // TOTAL HARGA
//     for(itemArr=0 ; itemArr<n ; itemArr++){
//         total += kasir[itemArr].harga;
//     }
    
//     printf("\n"); 

// // OUTPUT
//     for(itemArr=0 ; itemArr<n ; itemArr++){
//         printf("%d. Nama Barang\t: %s\n", itemArr+1, kasir[itemArr].item);
//         printf("   Harga\t: %d\n\n", kasir[itemArr].harga);
//     }
//     printf("TOTAL HARGA\t: Rp%d", total); 
//     getch();
//     return 0;
// }
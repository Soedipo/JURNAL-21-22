#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, Det, a; float matriks[2][2];

//INPUT
    printf("Masukkan angka: \n");
    for(i=0 ; i<=1 ; i++){
        for(j=0 ; j<=1 ; j++){
            printf("Matriks[%d][%d] = ", i+1, j+1);
            scanf("%f", &matriks[i][j]);
        }
    }
    system("cls");

//OUTPUT MATRIKS 2x2 
    printf("\nMATRIKS 2X2\n\n");

    for(i=0 ; i<=1 ; i++){
        for(j=0 ; j<=1 ; j++){
            printf("    %.1f", matriks[i][j]);
        }
        printf("\n\n");
    } 

//Adj(M)
    a = matriks[0][0];
    matriks[0][0] = matriks[1][1];
    matriks[1][1] = a;
    matriks[0][1] = - matriks[0][1]; matriks[1][0] = -matriks[1][0];  

//OUTPUT Adj(M)
    printf("ADJOIN\n\n");
for(i=0 ; i<=1 ; i++){
        for(j=0 ; j<=1 ; j++){
            printf("    %.1f", matriks[i][j]);
        }
        printf("\n\n");
    }             
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, temp, matriks[2][2];

//INPUT
    printf("Masukkan angka: \n");
    for(i=0 ; i<=1 ; i++){
        for(j=0 ; j<=1 ; j++){
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &matriks[i][j]);
        }
    }
    system("cls");

//OUTPUT MATRIKS 2x2 
    printf("\n---MATRIKS A---\n\n");

    for(i=0 ; i<=1 ; i++){
        for(j=0 ; j<=1 ; j++){
            printf("    %d", matriks[i][j]);
        }
        printf("\n\n");
    } 

//Adj(M)
    temp = matriks[0][0];
    matriks[0][0] = matriks[1][1];
    matriks[1][1] = temp;
    matriks[0][1] = - matriks[0][1]; matriks[1][0] = -matriks[1][0];  

//OUTPUT Adj(M)
    printf("---Adj(A)---\n\n");
    for(i=0 ; i<=1 ; i++){
        for(j=0 ; j<=1 ; j++){
            printf("    %d", matriks[i][j]);
        }
        printf("\n\n");
    }    
    return 0;         
} 
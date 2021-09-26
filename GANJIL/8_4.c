#include <stdio.h>
#include <string.h>

int main(){
    char text[50], letter;
    int TextLen, i , count = 0;

    printf("Masukkan kalimat: ");
    gets(text);
    printf("Huruf yang ingin dihitung: ");
    scanf("%c", &letter);

    TextLen = strlen(text);

    for (i = 0; i < TextLen; i++)
    {
        if(text[i] == letter){
            count++;
        }
    }

    printf("\nHuruf '%c' ada %d buah", letter, count);
    return 0;
}
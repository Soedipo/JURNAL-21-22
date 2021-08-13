// Program Appending untuk file teks
#include <stdio.h>
char string[255];
int main()
{
    FILE *hola; //(A). Tentukan pointernya 
    hola = fopen("DASKOMLAB.txt", "a"); //Tentukan (B). sintaks untuk membuka file dan (C). modenya
    gets(string);
    fprintf(hola, "%s\n", string); //(D). Tentukan sintaks untuk proses input
    fclose(hola); //(E). Tentukan sintaks untuk langkah terakhir file sekuensial
    return 0;
}

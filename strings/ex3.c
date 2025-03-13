// Escreva um programa que conte a quantidade de palavras de um
// texto digitado pelo teclado. (Uma palavra é qualquer sequência
// de caracteres separada por um ou mais espaços).

#include <stdio.h>
int main(){
    char text[] = {'B','o','m',' ','a',' ','D','i','a',' ','B','o','m',' ','D','i','a','\0'};
    int words = 0;
    int isWord = 0;

    for (int i = 0; text[i] != '\0'; i++){
        if ((int)text[i] == 32) isWord = 0; 
        else if (isWord == 0)
        {
            words++;
            isWord=1;
        }
    }
    
    printf("%d palavra(s)", words);
}
// Escreva um programa que leia um texto pelo teclado. Em
// seguida, faça uma função que inverta e exiba-o na tela.
// Exemplo: Para a string "Bom dia" o programa imprime "aid
// moB" Obs: O objetivo é alterar os caracteres na string, não é
// imprimir ao contrário! 
#include <stdio.h>
#include <string.h>

int main(){
    char text[]={'O','l','a','\0'};

    for (int i = 0; i < strlen(text)/2; i++)
    {
        char a = text[i];
        char b = text[strlen(text)-(i+1)];

        text[i]=b;
        text[strlen(text)-(i+1)]=a;
    }
    
    printf("A string: %s",text);
}
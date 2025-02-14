// Preencher um vetor B de 10 elementos com 10 se o índice do elemento for ímpar, e 20 se for par.
// Escrever o vetor B após o seu total preenchimento.
#include <stdio.h>
int main() {
    int b[10];
    for (int i = 0; i < 10; i++)
        if (i%2==0) b[i]=20;
        else b[i]=10;
    
    for (int i = 0; i < 10; i++) printf("%d ",b[i]);  
}
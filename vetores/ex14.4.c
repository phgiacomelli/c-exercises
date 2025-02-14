// 4 Ler um vetor C de 10 elementos inteiros. Após o término da leitura, trocar todos os valores negativos
// do vetor C por 0. Após todas as trocas terem sido efetuadas, escrever o vetor C.
#include <stdio.h>
int main() {
    int c[10] = {21,13,-2,-1,12,-4,-5,42,0,32};
    for (int i = 0; i < 10; i++) if (c[i]<0) c[i]=0;
    
    for (int i = 0; i < 10; i++) printf("%d ",c[i]);
}
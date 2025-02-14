// Preencher um vetor X de 10 elementos(índices de 0 a 9) com o valor inteiro 30.Escrever o vetor X,
// após seu total preenchimento
#include <stdio.h>
int main() {
    int x[10];
    for (int i = 0; i < 10; i++) x[i]=30;
    for (int i = 0; i < 10; i++) printf("%d ",x[i]);
}
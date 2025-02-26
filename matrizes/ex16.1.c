//  16.1 Ler uma matriz M 5 x 5, calcular e escrever as seguintes somas:
// a) da linha 3 de M
// b) da coluna 2 de M
// c) da diagonal principal
// d) da diagonal secundária
// e) de todos os elementos da matriz
#include <stdio.h>
int main(){
    int m[5][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}}; 
    int somaLinha3 = 0, somaColuna2 = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0, somaTotal = 0;

    for (int i = 0; i < 5; i++)
    {
        somaLinha3+=m[2][i];
        somaColuna2+=m[i][1];
        somaDiagonalPrincipal+=m[i][i];
        somaDiagonalSecundaria+=m[i][4-i];
        for (int j = 0; j < 5; j++) somaTotal+=m[i][j];
        
    }

    printf("Soma linha 3: %d\n", somaLinha3);
    printf("Soma coluna 2: %d\n", somaColuna2);
    printf("Soma Diagonal Principal: %d\n", somaDiagonalPrincipal);
    printf("Soma Diagonal Secundaria: %d\n", somaDiagonalSecundaria);
    printf("Soma total: %d\n", somaTotal);
    

}
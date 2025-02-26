// Ler uma matriz G 5 x 5 e criar 2 vetores SL e SC de 5 elementos que contenham respectivamente as
// somas das linhas e das colunas de G. Escrever os vetores criados.
#include <stdio.h>
int main()
{
    int G[5][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    int SL[5] = {0, 0, 0, 0, 0}, SC[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            SL[i] += G[i][j];
            SC[i] += G[j][i];
        }

    printf("Soma Linhas: \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", SL[i]);
        
    printf("\nSoma Colunas: \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", SC[i]);
}
// Ler 2 matrizes, A 4 x 6 e B 4 x 6 e criar :
// a) uma matriz S que seja a soma de A e B.
// b) uma matriz D que seja a diferença de A e B. (A – B).
// Escrever as matrizes S e D após todo cálculo estar concluído.

#include <stdio.h>
int main()
{
    int A[4][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}};
    int B[4][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 0, 25, 12}, {13, 7, 15, 46, 17, 18}, {1, 2, 21, 22, 2, 4}};
    int S[4][6], D[4][6];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            S[i][j] = A[i][j] + B[i][j];
            D[i][j] = A[i][j] - B[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Soma(%d,%d) = %d",i+1,j+1, S[i][j]);
            printf("\n");
            printf("Diferenca(%d,%d) = %d",i+1,j+1, D[i][j]);
            printf("\n\n");
        }
        
    }
    
}
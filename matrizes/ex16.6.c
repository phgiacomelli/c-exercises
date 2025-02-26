// Ler uma matriz A 12 x 13 e divida todos os 13 elementos de cada uma das 12 linhas de A pelo valor
// do maior elemento daquela linha. Escrever a matriz A modificada.
#include <stdio.h>

int main(){
    float A[12][13] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,13},
        {2, 3, 4, 5, 6, 7, 80, 9, 10, 11, 12, 1,13},
        {3, 4, 5, 6, 7, 8, 9, 120, 11, 12, 1, 2,13},
        {4, 5, 6, 7, 8, 9, 100, 11, 12, 1, 2, 3,13},
        {5, 6, 75, 8, 9, 10, 11, 12, 1, 2, 3, 4,13},
        {6, 79, 8, 9, 10, 11, 12, 1, 2, 3, 4, 5,13},
        {7, 8, 9, 10, 11, 12, 1, 2, 30, 4, 5, 6,13},
        {8, 9, 10, 11, 12, 1, 2, 3, 4, 57, 6, 7,13},
        {9, 10, 11, 12, 1, 2, 3, 4, 5, 6, 7, 8,13},
        {10, 11, 12, 1, 2, 3, 4, 5, 6, 7, 88, 9,13},
        {11, 12, 1, 29, 3, 4, 5, 6, 7, 8, 9, 10,13},
        {12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,13}
    };
    float maior = -1;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 13; j++)
            if (A[i][j] > maior) maior=A[i][j];

        for (int k = 0; k < 13; k++){
            A[i][k] /= maior; 
            printf("%.2f ", A[i][k]);
        }
        printf("\n");
        maior=-1;       
    }
}
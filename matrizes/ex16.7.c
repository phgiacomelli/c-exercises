// Ler um vetor G de 13 elementos que contenha o gabarito da loteria esportiva codificado da seguinte
// forma: 1-coluna um, 2-coluna do meio, 3-coluna dois.
// Logo após, ler uma matriz 13 x 3 que contenha a aposta de um jogador. Considere que cada posição da
// matriz armazenará o valor 1 se for apostado, 0 caso contrário. Calcular e escrever o número de pontos
// obtidos pelo jogador. Escrever também o número de apostas simples, dupla ou tripla utilizadas pelo
// apostador.

#include <stdio.h>
int main()
{
    int G[13] = {1, 3, 1, 2, 1, 1, 2, 3, 3, 3, 1, 2, 1};
    int A[13][3] = {
        {0, 1, 1},
        {1, 1, 1},
        {1, 0, 0},
        {0, 1, 1},
        {1, 0, 1},
        {1, 0, 0},
        {1, 1, 1},
        {1, 1, 0},
        {0, 1, 1},
        {0, 0, 1},
        {1, 0, 1},
        {1, 1, 1},
        {0, 1, 0}};

    int acertos = 0, simples = 0, dupla = 0, tripla = 0;

    for (int i = 0; i < 13; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
            if (A[i][j]==1){
                count++;
                if (G[i] == j + 1) acertos++;
            } 
            
        if (count==1) simples++;
        else if (count==2) dupla++;
        else tripla++;
    }

    printf("Acertos: %d\n\n", acertos);
    printf("Simples: %d\n", simples);
    printf("Duplas: %d\n", dupla);
    printf("Triplas: %d", tripla);
}
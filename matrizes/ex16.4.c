// Ler uma matriz D 5 x 5 (considere que não serão informados valores duplicados). A seguir ler um
// número X e escreva uma mensagem indicando se o valor de X existe ou NÃO na matriz.

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int D[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 1, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int X;
    bool exists = false;

    printf("Digite um numero: ");
    scanf("%d", &X);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (D[i][j] == X)
            {
                exists = true;
                break;
            }

    if (exists) printf("O numero %d existe na matriz", X);
    else printf("O numero %d NÃO existe na matriz", X);
}
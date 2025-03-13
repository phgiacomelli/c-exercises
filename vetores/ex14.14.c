// Ler um vetor Q de 10 posições (aceitar somente números positivos-se o valor informado for
//     negativo ou zero a leitura deverá ser repetida). Escreva a seguir o valor do maior elemento de Q e a
//     respectiva posição(índice) que ele ocupa no vetor.
#include <stdio.h>

int main()
{
    int q[10], num, i = 0, maior = -1, indicieMaior = -1;

    while (i < 10)
    {
        printf("\n");
        printf("Digite um numero positivo: ");
        scanf("%d",&num);

        if (num > 0)
        {
            q[i] = num;
            i++;
        }        
    }
    
    for (int i = 0; i < 10; i++)
        if (q[i]>maior){
            maior = q[i];
            indicieMaior = i;
        }
            
    printf("Indicie maior: %d ", indicieMaior);   
}
// Ler uma matriz A de 4 x 4, calcular e escrever as somas dos elementos marcados com o X. Utilizar
// estruturas de repetição.
#include <stdio.h>
int main(){
    int A[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    int soma4p = 0, soma4u = 0, somaPe = 0, somaPd = 0;

    for (int i = 0; i < 2; i++) soma4p+=(A[i][0]+A[i][1]);
    // Outra forma para fazer
    // for (int i = 0; i < 2; i++) 
    //     for (int j = 0; j < 2; j++) soma4p+=A[i][j];   

    for (int i = 2; i < 4; i++) soma4u+=(A[i][2]+A[i][3]);
    // Outra forma para fazer
    // for (int i = 2; i < 4; i++) 
    //     for (int j = 2; j < 4; j++) soma4p+=A[i][j];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j <= i; j++) somaPe+=A[i][j];

    for (int i = 0; i < 3; i++)
        for (int j = i+1; j <= 3; j++) somaPd+=A[i][j];
        
    printf("%d\n",soma4p);
    printf("%d\n",soma4u);
    printf("%d\n",somaPe);
    printf("%d\n",somaPd);

}

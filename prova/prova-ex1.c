// Escreva um algoritmo que leia 50 valores que representem preços de produtos. Escreva o valor do
// produto mais caro e dê um desconto de 12% para o produto mais barato. 

#include <stdio.h>
int main() {
    float valor, maior, menor = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Valor do Produto %d: ", i+1);
        scanf("%f", &valor);

        if (valor>maior) maior=valor;

        if (i != 0) {
            if (valor<menor) menor=valor;
        }
        else {
            menor=valor;
        }        
    }
    printf("\n\nProduto mais caro: %.2f",maior);
    printf("\n\nProduto mais barato(desc. 12%%): %.2f",menor*0.88);

    

}
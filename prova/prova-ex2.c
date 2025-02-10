// Escreva um programa que leia o salário de 60 indivíduos (aceitar somente valores positivos). Para
// cada valor lido calcule e escreva um aumento de salário segundo dados abaixo:
// 2.5% p/ salário > =8000
// 10% p/ salário entre 5000 e 8000
// 15% p/ o menor <= 5000

#include <stdio.h>
int main()
{
    int i = 0;
    float salario;

    while (i < 60)
    {
        printf("Digite o salario: ");
        scanf("%f", &salario);

        if (salario > 0)
        {

            printf("Salário: %.2f", salario);

            if (salario >= 8000) salario *= 1.15;
            else if (salario > 5000 && salario < 8000) salario *= 1.025;
            else salario *= 1.1;

            printf("\nSalário pós aumento: %.2f", salario);
            i++;
        }
        else printf("Digite um salário válido!");
    }
}

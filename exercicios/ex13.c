#include <stdio.h>

int main()
{
    int n;

    printf("N ésimo termo: ");
    scanf("%d", &n);

    float s;
    int first_term = 4;
    int second_term = 3;
    int denominator = 1;

    for (int i = 0; i < n; i++)
    {
        s+=(float)(first_term-second_term)/denominator;

        first_term+=4;
        denominator+=2;

        if (second_term == 3) second_term = 4;
        else second_term = 3;
    }
    
    printf("Soma dos %d termos: %.2f", n, s);
}
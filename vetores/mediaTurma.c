#include <stdio.h>

int main()
{
    float notas[10], sum = 0, media;
    int acimaMedia = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        sum += notas[i];
    }
    media = sum/10;

    for (int i = 0; i < 10; i++) if (notas[i]>media) acimaMedia++;

    printf("Media da turma: %.2f \nAlunos acima da media da turma: %d", sum / 10, acimaMedia);
}
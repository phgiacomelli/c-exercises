// Ler um vetor M de 10 elementos. Troque a seguir o 1o. elemento com o 6o., o 2o. com o 7o.,etc. até
// o 5o. com 10o. e escreva o vetor M assim modificado
#include <stdio.h>
int main() {
    int m[10] =  {21,12,1,0,14,-4,-5,42,23,32};

    for (int i = 0; i < 5; i++)
    {
        int a = m[i];
        m[i]=m[i+5];
        m[i+5]=a;
    }

    for (int i = 0; i < 10; i++) printf("%d ",m[i]);    
}
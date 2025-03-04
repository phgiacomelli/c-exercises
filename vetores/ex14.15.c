// Ler um vetor U de 10 elementos. Troque a seguir o 1o. elemento com o último, o 2o. com o
// penúltimo, etc. até o 5o. com o 6o. e escreva o vetor U assim modificado.
#include <stdio.h>
int main() {
    int u[10] =  {21,12,1,0,14,-4,-5,42,23,32};
    int c = 9;
    
    for (int i = 0; i < 5; i++)
    {
        int a = u[i];
        u[i]=u[i+c];
        u[i+c]=a;
        c-=2;
    }

    for (int i = 0; i < 10; i++) printf("%d ",u[i]);  
    
}
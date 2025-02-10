#include <stdio.h>

int main(){ 
    int num, fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) fat*=i;

    printf("Fat: %d", fat);
    
}
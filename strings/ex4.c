// Construa um programa que leia uma string s, e dois caracteres a
// e b. Em seguida, o programa deve substituir todas as ocorrências
// do caractere a na string s pelo caractere b. (Observação: a e b
// são informados pelo usuário e podem ser qualquer letra)

#include <stdio.h>
int main(){
    char s[] = {'p','h','a','s','m','o','p','h','o','b','i','a','\0'};
    char a = 'p', b='h';

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == a) s[i]=b;
        else if (s[i] == b) s[i]=a;   
    }

    for (int i = 0; s[i] != '\0' ; i++) printf("%c",s[i]);
}
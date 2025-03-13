// Uma operação muito comum de manipulação de strings é
// conhecida como TRIM. Trata-se de uma função que recebe uma
// string e remove todos os espaços no início e no fim da string.
// Elabore uma função que realiza esta tarefa.

#include <stdio.h>
#include <string.h>

int main(){
    char text[] = {' ','B','o','m',' ','D','i','a',' ','\0'};
    
    for (int i = 0; text[i] != '\0'; i++)
        if ((i == 0|| i == strlen(text)-1) && (int)text[i] == 32 && (int)text[i+1] != 32  )
            for (int j = i; text[j] != '\0'; j++) text[j] = text[j+1];
    
    for (int i = 0; text[i] != '\0'; i++) printf("%c",text[i]);
}
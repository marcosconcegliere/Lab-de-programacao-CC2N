#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1000 //ESTÁTICA

int main()
{
    char STR1[TAM], STR2[TAM];
    char AUX[TAM];
    unsigned T1, T2;

    printf("Palavra 1: ");
    scanf("\n%[^\n]", STR1);
    printf("Palavra 2: ");
    scanf("\n%[^\n]", STR2);
    T1 = strlen(STR1);
    T2 = strlen(STR2);

    //TRATAMENTO DE ERRO
    if(T1 < 2 || T2 < 2)
        printf("ERRO NAS PALAVRAS. Escolha de novo.\n");
    else{
        strcpy(AUX, STR1);
        strcat(STR1, "-");
        strcat(STR1, STR2);
    }
    printf("Palavra concatenada: %s - palavra 1: %s - palavra 2: %s", STR1, AUX, STR2);
    return 0;
}

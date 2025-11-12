// bibliotecas + constante (global)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 1000

// prototipos: abstracao + encapsulamento
// prototipos: ponteiros fixos e variaveis
// declaração explicita
void contadorLetras (char texto[TAMANHO], int *Q1, int *Q2);

// declaração implicita
// void contadorLetras (char texto[], int *Q1, int *Q2);
// void contadorLetras (char *texto, int *Q1, int *Q2);

// funcoes: abstracao + encapsulamento
void contadorLetras (char texto[TAMANHO], int *Q1, int *Q2){
    int indice = 0;
    //reset:
    *Q1 = 0;
    *Q2 = 0;
    // percorrer todo um texto:
    // Q1: quantidade de letras minusculas: 'a' e 'z'
    // Q2: quantidade de letras maiusculas: 'A' e 'Z'
    while(texto[indice] != '\0'){
        // letras minusculas: 'a' e 'z'
        if(texto[indice] >= 'a' && texto[indice] <= 'z')
            *Q1 = (*Q1) + 1;
        // letras maiusculas: 'A' e 'Z'
        else if(texto[indice] >= 'A' && texto[indice] <= 'Z')
            *Q2 = (*Q2) + 1;
        indice++;
    }
}

int main()
{
    char texto[TAMANHO]; // ponteiro fixo
    int Q1, Q2;
    do{
        printf("Entre com um texto qualquer: ");
        scanf("\n%[^\n]", texto);
        //comparação de strings : STRCMP : fim do programa: "sair" ou "SAIR"
        if(strcmp(texto, "SAIR") == 0 ||
           strcmp(texto, "sair") == 0)
            printf("FIM DO PROGRAMA.\n");
        else{
            //reusabilidade
            contadorLetras(texto, &Q1, &Q2);
            printf("Texto: %s\n", texto);
            printf("Quantidade de letras minusculas: %i\n", Q1);
            printf("Quantidade de letras maiusculas: %i\n", Q2);
        }
    }while(strcmp(texto, "SAIR") != 0 &&
           strcmp(texto, "sair") != 0);
    return 0;
}

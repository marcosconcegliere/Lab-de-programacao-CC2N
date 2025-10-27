#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 100
int main()
{
    char palavra[TAMANHO]; //indexação
    int contador = 0;
    int menor = TAMANHO + 1, maior = 0; //start
    unsigned tamanhoPalavra;
    char palavraMenor[TAMANHO], palavraMaior[TAMANHO];
    while(contador < 5){
        printf("Palavra %i: ", contador+1); //enumeração
        scanf("\n%[^\n]", palavra);
        tamanhoPalavra = strlen(palavra);
        //TRATAMENTO DE ERRO:
        if(tamanhoPalavra < 2)
            printf("ERRO NA PALAVRA. Escolha de novo.\n");
        else{
            if(tamanhoPalavra < menor){
                menor = tamanhoPalavra;
                strcpy(palavraMenor, palavra);
            }
            if(tamanhoPalavra > maior){
                maior = tamanhoPalavra;
                strcpy(palavraMaior, palavra);
            }
            contador = contador + 1; // ITERAÇÃO step
        }
    }
    printf("Menor palavra: %s (Tamanho: %u caracteres)\n",
           palavraMenor, menor);
    printf("Maior palavra: %s (Tamanho: %u caracteres)\n",
           palavraMaior, maior);
    return 0;
}

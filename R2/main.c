#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, quantidade = 0, X, soma = 0;
    float media;
    printf("Valor inteiro de X (X >= 1): "); scanf("%i", &X);
    if(X < 1)
    //TRATAMENTO DE ERRO
        printf("ERRO: Valor incorreto de X.\n");
    else{
        printf("Os impares entre [%i, %.0f] sao:\n", X, pow(X, 3));
        for(contador = X; contador <= pow(X,3); contador++){
            //IMPARES:
            if(contador % 2 != 0){
                //ENUMERAR: Contar
                quantidade++;
                //TOTALIZAR: Somar
                soma = soma + contador;
                printf("IMPAR %i: %i\n", quantidade, contador);
            }
        }
        //MEDIA = Float
        media = 1.0*soma / quantidade;
        printf("Soma dos %i Impares eh: %i\n", quantidade, soma);
        printf("Media dos %i Impares eh: %.1f\n", quantidade, media);
    }
    return 0;
}

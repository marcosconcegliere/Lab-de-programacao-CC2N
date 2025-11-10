//biblioecas + constantes
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//PROTOTIPOS: abstracao + encapsulamento
//return: void
void cubo1 (float L, float *area, float *volume);

//return: area (float)
float cubo2(float L, float *volume);

//return: volume (float)
float cubo3(float L, float *area);

//FUNCOES: abstracao + encapsulamento
void cubo1 (float L, float *area, float *volume){
    *area = 6 * pow(L, 2);
    *volume = pow(L, 3);
}

float cubo2(float L, float *volume){
    float area;
    area = 6 * pow(L, 2);
    *volume = pow(L, 3);
    return area;
}

float cubo3(float L, float *area){
    float volume;
    volume = pow(L, 3);
    *area = 6 * pow(L, 2);
    return volume;
}
//MAIN(I/O): reusabilidade

int main()
{
    int contador = 0; //start
    float L, area, volume;
    while(contador < 100){   //stop
        //enumeracao:
        printf("Dados do Cubo %i: \n", contador+1);
        printf("Valor do Lado (L > 0): ");
        scanf("%f", &L);
        // tratamento de erro
        if(L <= 0)
            printf("ERRO: variavel L invalida. Escolha de novo.\n");
        else{
            printf("Dados de saida: \n");
            //return: void (nada)
            cubo1(L, &area, &volume);
            printf("Area: %.1f metros quadrados.\n", area);
            printf("Volume: %.1f metros cubicos.\n", volume);

            //return: area (float)
            area = cubo2(L, &volume);
            printf("Area: %.1f metros quadrados.\n", area);
            printf("Volume: %.1f metros cubicos.\n", volume);

            //return: volume (float)
            volume = cubo3(L, &area);
            printf("Area: %.1f metros quadrados.\n", area);
            printf("Volume: %.1f metros cubicos.\n\n", volume);

            //iteracao: step
            contador = contador+1;
        }
    }
    return 0;
}

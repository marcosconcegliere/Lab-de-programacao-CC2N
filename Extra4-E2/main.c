#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main()
{
    float R, H, AreaTotal, custo;
    int lata;
    printf("PINTAR TANQUE CILINDRICO: Dados de entrada:\n");
    printf("Raio do tanque (metros): "); scanf("%f", &R);
    printf("Altura do tanque (metros): "); scanf("%f", &H);
    //TRATAMENTO DE ERRO
    if(R<=0 || H<=0)
        printf("ERRO: DADOS INVALIDOS\n");
    else{
        AreaTotal = 2 * PI * R * (R + H);
        lata = ceil((AreaTotal/3)/5);
        custo = lata*50;
        printf("Quantidade de tinta (em latas): %d\n", lata);
        printf("Custo (em reais): R$%.2f\n", custo);
    }

    return 0;
}

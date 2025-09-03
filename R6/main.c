#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int atletas = 0, tempo;
    int matricula, matriculaVencedor;
    float tempoVencedor = INFINITY;
    int matriculaLanterna;
    float tempoLanterna = -INFINITY; // OU ZERO
    printf("DEZ MILHAS GAROTO;\n");
    while(atletas < 3){
        printf("Atleta %i: Tempo: ", atletas + 1);
        scanf("%i", &tempo);
        printf("MATRICULA (XXXXX): "); scanf("%i", &matricula);
        //TRATAMENTO DE ERRO
        if(tempo <= 0)
            printf("ERRO: Valor incorreto. Escolha de novo\n");
        else if(matricula < 1000 || matricula > 100000)
            printf("ERRO: Valor incorreto. Escolha de novo\n");
        else{
            if(tempo < tempoVencedor){
                tempoVencedor = tempo;
                matriculaVencedor = matricula;
            }
            if(tempo > tempoLanterna){
                tempoLanterna = tempo;
                matriculaLanterna = matricula;
            }
            atletas++;
        }
    }
    printf("Resultado da corrida:\n");
    printf("Dados do Vencedor;\n");
    printf("Matricula: %i\n", matriculaVencedor);
    printf("Tempo: %.0f\n", tempoVencedor);
    printf("Dados do Lanterna;\n");
    printf("Matricula: %i\n", matriculaLanterna);
    printf("Tempo: %.0f\n", tempoLanterna);

    return 0;
}

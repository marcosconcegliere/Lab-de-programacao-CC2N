#include <stdio.h>
#include <stdlib.h>
#define SM 1518.01  // SM: Salário Mínimo

int main()
{
    int alunos = 0;        //START
    float salario, soma = 0, media;
    printf("PESQUISA SALARIAL UNIVERSITARIA: \n");
    while (alunos < 3){ //STOP
        //ENUMERAR: contar
        printf("ALUNO %i - SALARIO (>= R$ %.2f): ", alunos + 1, SM);
        scanf("%f", &salario);
        //TRATAMENTO DE ERRO:
        if(salario < SM)
            printf("ERRO: Escolha de novo.\n");
        else{
            soma = soma + salario;
            alunos++;     //STEP
        }
    }
    media = soma / alunos;
    printf ("MEDIA SALARIAL: R$ %.2f\n", media);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fulano = 0, beltrano = 0, cicrano = 0;     //TOTALIZAR / RESETAR
    int moradores = 0;                             //ENUMERAR / RESETAR
    int voto, opcao;
    float pfulano, pbeltrano, pcicrano;
    printf("Eleicao para Sindico do Predio\n");
    printf("Menu de Opcoes:\n");
    printf("1: Cadastrar voto\n");
    printf("0: Sair do Programa\n");
    do{
        printf("Sua opcao: "); scanf("%i", &opcao);
        // TRATAMENTO DE ERRO
        if(opcao < 0 || opcao > 1) printf("ERRO: Escolha de novo.\n");
        else if(opcao == 0) printf ("Fim da eleicao.\n");
        else{
            printf("Opcoes de Candidatos:\n");
            printf("1: Para votar Fulano\n");
            printf("2: Para votar Beltrano\n");
            printf("3: Para votar Cicrano\n");
            do{
                printf("Morador %i: Seu voto: ", moradores + 1);
                scanf("%i", &voto);
                //TRATAMENTO DE ERRO:
                if(voto < 1 || voto > 3)
                    printf("ERRO: Voto incorreto\n");
            }while(voto < 1 || voto > 3);
            if(voto == 1) fulano ++;
            else if( voto == 2) beltrano ++;
            else cicrano ++;
            moradores++;     //STEP
            pfulano = 100.0 * fulano / moradores;
            pbeltrano = 100.0 * beltrano / moradores;
            pcicrano = 100.0 * cicrano / moradores;
            printf("Resultado da Eleicao: \n");
            printf("Total de Votos Fulano: %i (%.1f %%)\n", fulano, pfulano);
            printf("Total de Votos Beltrano: %i (%.1f %%)\n", fulano, pbeltrano);
            printf("Total de Votos Cicrano: %i (%.1f %%)\n", fulano, pcicrano);
        }
    }while(opcao != 0);
    return 0;
}

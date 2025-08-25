#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ENTRADA DE DADOS
    float preco, reajuste, valorReajustado;
    float desconto, acrescimo;
    int opcao;
    printf("MERCADORIA: Dados de entrada\n");
    printf("Menu de opcoes:\n");
    printf("[1]: Acrescimo\n");
    printf("[2]: Desconto\n");
    printf("Sua opcao: "); scanf("%i", &opcao);
    //TRATAMENTO DE ERRO
    if(opcao != 1 && opcao != 2)
        printf("ERRO: opcao incorreta\n");
    else{
        printf("Preco: R$ "); scanf("%f", &preco);
        printf("Reajuste: %% "); scanf("%f", &reajuste);
        //TRATAMENTO DE ERRO:
        if(preco <= 0 || reajuste <=0)
            printf("ERRO: valor incorreto\n");
        else{
            if(opcao == 1){
                //valorReajustado = preco + reajuste / 100 * preco;
                //valorReajustado = preco * (1 + reajuste / 100);
                acrescimo = reajuste / 100 * preco;
                valorReajustado = preco + acrescimo;
                printf("Acrescimo (%.2f %%): R$ %.2f\n", reajuste, acrescimo);
            }
            else{
                //valorReajustado = preco + reajuste / 100 * preco;
                //valorReajustado = preco * (1 + reajuste / 100);
                desconto = reajuste / 100 * preco;
                valorReajustado = preco - desconto;
                printf("Desconto (%.2f %%): R$ %.2f\n", reajuste, desconto);
            }
            printf("Preco reajustado: R$ %.2f\n", valorReajustado);
        }
    }
    return 0;
}

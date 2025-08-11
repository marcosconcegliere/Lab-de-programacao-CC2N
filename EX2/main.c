#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, reajuste;
    float totalBruto, totalLiquido, desconto;
    int quantidade;
    printf("MERCADORIA: dados de entrada\n");
    printf("Preco (R$): "); scanf("%f", &preco);
    printf("Quantidade (Unid.): "); scanf("%i", &quantidade);
    printf("Reajuste (%%): "); scanf("%f", &reajuste);
    totalBruto = preco * quantidade;
    desconto = reajuste/100*totalBruto;
    totalLiquido = totalBruto - desconto;
    printf("Total (sem desconto): R$ %.2f\n", totalBruto);
    printf("Total (%.2f %% OFF): R$ %.2f\n", reajuste, totalLiquido);
    printf("Desconto (%.2f %%): R$ %.2f\n", reajuste, desconto);
    return 0;
}

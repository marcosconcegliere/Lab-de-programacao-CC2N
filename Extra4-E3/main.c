#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N1, N2, e, r;
    printf("MINI CALCULADORA PROGRAMAVEL: Dados de Entrada\n");
    printf("MENU:\n");
    printf("[1]: SOMA: N1 + N2\n");
    printf("[2]: SUBTRAÇÃO: N1 - N2\n");
    printf("[3]: MULTIPLICACAO: N1 * N2\n");
    printf("[4]: DIVISAO (float): N1 / N2\n");
    printf("[5]: DIV (int): N1 / N2\n");
    printf("[6]: MOD (int): N1 %% N2\n"); scanf("%i", &e);
    printf("Primeiro numero: "); scanf("%i", &N1);
    printf("Segundo numero: "); scanf("%i", &N2);
    if(N1<=0 || N2 <=0)
        printf("ERRO: Dados inválidos\n");
    else{
        switch(e)
        {
            case (1):
                r= N1 + N2;
            break;

            case (2):
                r= N1 - N2;
            break;

            case (3):
                r= N1 * N2;
            break;

            case (4):
                r= 1.0*N1 / N2;
            break;

            case (5):
                r= N1/N2;
            break;

            case (6):
                r= N1%N2;
            break;

            default:
            printf("Dados invalidos\n");
        }
        printf("Resultado: %i", r);
    }
    return 0;
}

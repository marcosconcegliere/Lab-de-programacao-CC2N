#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main()
{
    // ENTRADA:
    float R, area, volume, volumeLitros;
    printf("Esfera: Dados de Entrada\n");
    printf("Raio(R) em metros: ");
    scanf("%f",&R);
    // PROCESSAMENTO (ULA):
    area = 4*PI*pow(R,2); // Metros Quadrados
    volume = 4.0/3.0*PI*pow(R,3); // Metros Cúbicos
    volumeLitros = 1000*volume; // Litros
    //SAÍDA:
    printf("Dados da esfera:\n");
    printf("Area: %.2f Metros Quadrados\n", area);
    printf("Volume: %.2f Metros Cubicos\n", volume);
    printf("Volume em litros: %.2f Litros\n", volumeLitros);
    return 0;
}

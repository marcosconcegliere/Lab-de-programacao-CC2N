#include <stdio.h>
#include <math.h>
#define T 5
int main(void) {
  int X = 2, INDICE;
  // PONTEIRO: VARIÁVEL
  int *P, *Q;
  // PONTEIRO: FIXO
  int array[T] = {1, 2, 3, 4, 5};
  printf("ACESSO DIRETO: VALOR      DE X = %i\n", X);
  printf("ACESSO DIRETO: ENDEREÇO   DE X = %p\n", &X);
  // APONTAMENTO: Ponteiro P
  P = &X;
  printf("ACESSO INDIRETO: VALOR    DE X = %i\n", *P);
  printf("ACESSO INDIRETO: ENDEREÇO DE X = %p\n", P);
  // APONTAMENTO: Ponteiro Q
  Q = P;
  printf("ACESSO INDIRETO: VALOR    DE X = %i\n", *Q);
  printf("ACESSO INDIRETO: ENDEREÇO DE X = %p\n", Q);
  printf("DADOS DO VETOR: ACESSO DIRETO: \n");
  for(INDICE = 0; INDICE < T; INDICE++){
    printf("ACESSO DIRETO: VALOR DE ARRAY[%i]: %i\n", INDICE, array[INDICE]);
    printf("ACESSO DIRETO: ENDEREÇO DE ARRAY[%i]: %p\n", INDICE, &array[INDICE]);
  }
  // APONTAMENTO: Ponteiro Q
  Q = array;
  // array = P; Ponteiro Fixo não muda de endereço
  printf("DADOS DO VETOR: ACESSO INDIRETO: \n");
  for(INDICE = 0; INDICE < T; INDICE++){
    printf("ACESSO INDIRETO: VALOR DE ARRAY[%i]: %i\n", INDICE, *(Q + INDICE));
    printf("ACESSO INDIRETO: ENDEREÇO DE ARRAY[%i]: %p\n", INDICE, Q + INDICE);
  }
  return 0;
}

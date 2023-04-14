#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entrada_02(float *a, float *b, float *c, float *d){
    printf("Entre com a 1o nota: ");
    scanf("%f", a);
    printf("Entre com a 2o nota: ");
    scanf("%f", b);
    printf("Entre com a 3o nota: ");
    scanf("%f", c);
    printf("Entre com a 4o nota: ");
    scanf("%f", d);

}

void processamento_02(float *a, float *b, float *c, float *d, float *media){
    *media = (*a + *b + *c + *d) / 4.0;
}

void saida_02(float media){
    printf("\nMedia: %.2f", media);
}

void questao02(){
    float nota1, nota2, nota3, nota4, m;

    entrada_02(&nota1, &nota2, &nota3, &nota4);
    processamento_02(&nota1, &nota2, &nota3, &nota4, &m);
    saida_02(m);
}

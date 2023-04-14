#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void entrada_03(float *n1, float *n2, int *p1, int *p2){
    printf("Entre com a 1o nota: ");
    scanf("%f", n1);
    printf("Entre com a 2o nota: ");
    scanf("%f", n2);
    printf("Entre com o 1o peso: ");
    scanf("%d", p1);
    printf("Entre com a 2o pesp: ");
    scanf("%d", p2);

}

void processamento_03(float *n1, float *n2, int *p1, int *p2, float *media){
    *media = ((*n1) * (*p1) + (*n2) * (*p2)) / (*p1 + *p2);
}

void saida_03(float media){
    printf("\nMedia: %.2f", media);
}

void questao03(){
    float nota1, nota2, m;
    int peso1, peso2;

    entrada_03(&nota1, &nota2, &peso1, &peso2);
    processamento_03(&nota1, &nota2, &peso1, &peso2, &m);
    saida_03(m);
}

#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void entrada_06(float *valAntigo, float *valNovo){
    printf("Entre com o valor antigo do produto: ");
    scanf("%f", valAntigo);
    printf("Entre com o valor novo do produto: ");
    scanf("%f", valNovo);
}

void processamento_06(float *valAntigo, float *valNovo, float *p){
    *p = ((*valNovo - *valAntigo) / *valAntigo) * 100;
}

void saida_06(float p){
    printf("\nPorcentagem de aumento eh: %g", p);
}

void questao06(){
    float valorAntigo, valorNovo, porcentagemAumento;

    entrada_06(&valorAntigo, &valorNovo);
    processamento_06(&valorAntigo, &valorNovo, &porcentagemAumento);
    saida_06(porcentagemAumento);
}

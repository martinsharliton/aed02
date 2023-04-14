#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void entrada_18(float *medU1, float *medU2){
    printf("Entre com a media da unidade 1: ");
    scanf("%f", medU1);
    printf("Entre com a media da unidade 2: ");
    scanf("%f", medU2);
}

void processamento_18(float *medU1, float *medU2, float *medF){
    *medF = (*medU1 + *medU2) / 2.0;
}

void saida_18(float medF){
    printf("\nMedia final: %g", medF);

    if(medF >= 7.0){
        printf("\nAPROVADO\n");
    }else if(medF < 3.0){
        printf("\nREPROVADO\n");
    }else{
        printf("\nPROVA FINAL\n");
    }
}

void questao18(){
    float mediaUnidade1, mediaUnidade2, mediaFinal;

    entrada_18(&mediaUnidade1, &mediaUnidade2);
    processamento_18(&mediaUnidade1, &mediaUnidade2, &mediaFinal);
    saida_18(mediaFinal);
}

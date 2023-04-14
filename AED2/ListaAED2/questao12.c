#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao12.h"

void entrada_12(float *n1, float *n2){
    printf("Entre com a primeira nota: ");
    scanf("%f", n1);
    printf("Entre com a segunda nota: ");
    scanf("%f", n2);
}

void processamento_12(float *n1, float *n2, float *m){
    *m = (*n1 + *n2) / 2.0;
}

void saida_12(float m){
    if(m >= 7.0){
        printf("\nO aluno esta aprovado");
    }else{
        printf("\nO aluno esta reprovado");
    }
}

void questao12(){
    float numero1, numero2, media;

    entrada_12(&numero1, &numero2);
    processamento_12(&numero1, &numero2, &media);
    saida_12(media);
}

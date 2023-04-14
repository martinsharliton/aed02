#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entrada_08(float *km){
    printf("Entre com o valor em Km/h: ");
    scanf("%f", km);
}

void processamento_08(float *km, float *m){
   *m = *km / 3.6;
}

void saida_08(float m){
    printf("\nVelocidade em m/s: %g", m);
}

void questao08(){
    float a, b;

    entrada_08(&a);
    processamento_08(&a, &b);
    saida_08(b);
}

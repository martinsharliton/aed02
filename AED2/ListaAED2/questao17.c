#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao17.h"

void entrada_17(float *valP){
    printf("Entre com o valor da compra do produto: ");
    scanf("%f", valP);
}

void processamento_17(float *valP){
    if(*valP < 200){
        *valP += ((*valP * 50) / 100.0);
    }else{
         *valP += ((*valP * 30) / 100.0);
    }
}

void saida_17(float valV){
    printf("\nO valor da venda saira de: %g reais", valV);
}

void questao17(){
    float valorCompra;

    entrada_17(&valorCompra);
    processamento_17(&valorCompra);
    saida_17(valorCompra);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao16.h"

void entrada_16(float *salB){
    printf("Entre com o salario bruto: ");
    scanf("%f", salB);
}

void processamento_16(float *salB){
    if(*salB < 2000){
        *salB -= ((*salB * 10) / 100.0);
    }else{
         *salB -= ((*salB * 20) / 100.0);
    }
}

void saida_16(float salL){
    printf("\nO salario liquido eh: %g", salL);
}

void questao16(){
    float salarioBruto;

    entrada_16(&salarioBruto);
    processamento_16(&salarioBruto);
    saida_16(salarioBruto);
}

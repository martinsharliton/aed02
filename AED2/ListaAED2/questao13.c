#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao13.h"

void entrada_13(int *num){
    printf("Entre com um numero: ");
    scanf("%d", num);
}

void processamento_13(int *num, int *resultado){
    *resultado = *num % 5 == 0;
}

void saida_13(int resultado){
    if(resultado){
        printf("\nO numero e divisivel por 5.\n");
    }else{
        printf("\nO numero nao e divisivel por 5.\n");
    }
}

void questao13(){
    float numero;
    int res;

    entrada_13(&numero);
    processamento_13(&numero, &res);
    saida_13(res);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao14.h"

void entrada_14(int *num){
    printf("Entre com um numero: ");
    scanf("%d", num);
}

void processamento_14(int *num, int *resultado){
    *resultado = *num % 2 == 0;
}

void saida_14(int resultado){
    if(resultado){
        printf("\nO numero e par\n");
    }else{
        printf("\nO numero e impar.\n");
    }
}

void questao14(){
    float numero;
    int res;

    entrada_14(&numero);
    processamento_14(&numero, &res);
    saida_14(res);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao11.h"

void entrada_11(int *num){
    printf("Entre com um numero: ");
    scanf("%d", num);
}

void processamento_11(int *num, int *resultado){
    *resultado = (*num >= 100 && *num <= 500);
}

void saida_11(int resultado){
    if(resultado){
        printf("O numero esta entre 100 e 500");
    }else{
        printf("O numero nao esta entre 100 e 500");
    }
}

void questao11(){
    int numero, saida;

    entrada_11(&numero);
    processamento_11(&numero, &saida);
    saida_11(saida);
}

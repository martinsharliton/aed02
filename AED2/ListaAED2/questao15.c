#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao15.h"

void entrada_15(int *a, int *b){
    printf("Entre com um numero: ");
    scanf("%d", a);
    printf("Entre com outro numero: ");
    scanf("%d", b);
}

void processamento_15(int *a, int *b, int *resultado){
    *resultado = (*a > *b);
}

void saida_15(int a, int b, int resultado){
    if(resultado){
        printf("\nO maior numero eh: %d\n", a);
    }else{
         printf("\nO maior numero eh: %d\n", b);
    }
}

void questao15(){
    int num1, num2, res;

    entrada_15(&num1, &num2);
    processamento_15(&num1, &num2, &res);
    saida_15(num1, num2, res);
}

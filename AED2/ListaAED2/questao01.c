#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada_01(int *a, int *b, int *c){
    printf("Entre com o 1o valor: ");
    scanf("%d", a);
    printf("Entre com o 2o valor: ");
    scanf("%d", b);
    printf("Entre com o 3o valor: ");
    scanf("%d", c);
}

void processamento_01(int *a, int *b, int *c, int *soma){
    *soma = (*a + *b + *c);
}

void saida_01(int soma){
    printf("\nResultado: %d", soma);
}

void questao01(){
    int num1, num2, num3, s;

    entrada_01(&num1, &num2, &num3);
    processamento_02(&num1, &num2, &num3, &s);
    saida_01(s);
}

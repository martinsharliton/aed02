#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao20.h"

void entrada_20(int *a, int *b, int *c){
    printf("Entre com o numero 1: ");
    scanf("%d", a);
    printf("Entre com numero 2: ");
    scanf("%d", b);
    printf("Entre com numero 3: ");
    scanf("%d", c);
}

void processamento_20(int *a, int *b, int *c, int *res){
    if(*a == *b && *b == *c){
        *res = NULL;
    }else{
        if(*a > *b && *a > *c){
            *res = *a;
        }else if(*b > *a && *b > *c){
            *res = *b;
        }else{
            *res = *c;
        }
    }
}

void saida_20(int res){
    if(res == NULL){
        printf("\nNumeros identicos");
    }else{
        printf("\nMaior valor: %d", res);
    }
}

void questao20(){
    int a, b, c, res;

    entrada_20(&a, &b, &c);
    processamento_20(&a, &b, &c, &res);
    saida_20(res);
}

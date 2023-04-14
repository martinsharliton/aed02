#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void entrada_09(int *num){
    printf("Entre com o valor: ");
    scanf("%d", num);
}

void processamento_09(int *num, int *res){
    *res = (*num > 100);
}

saida_09(int res){
    if(res == 0){
        printf("\nO numero eh maior que 100.\n");
    }else{
        printf("\nO numero nao eh maior que 100.\n");
    }
}

void questao09(){
    int numero, res;

    entrada_09(&numero);
    processamento_09(&numero, &res);
    saida_09(numero);
}

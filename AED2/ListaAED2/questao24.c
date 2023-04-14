#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"

void entrada_24(int *valC, int *valP){
    printf("Entre com o valor da compra: ");
    scanf("%d",valC);
    printf("Entre com o valor a ser pago: ");
    scanf("%d",valP);

}
void processamento_24(int *valC, int *valP, int *cem, int *dez, int *um, int *troco, int *res){
    if(*valP < *valC){
        *res = 1;
    }else{
        *res = 0;
        *troco = *valP - *valC;

        *cem = *troco / 100;
        *troco -= ((*cem) * 100);

        *dez = *troco/10;
        *troco -= ((*dez) * 10);

        *um = *troco / 1;
    }
}

void saida_24(int cem, int dez, int um, int res){
    if(res){
        printf("\nO PAGAMENTO FOI NEGADO.\n");
    }else{
        printf("\nTroco: %d notas de 100, %d notas de 10 e %d notas de 1.\n", cem, dez, um);
    }
}

void questao24(void){
    int valorCompra, valorPago, c, d, u,troco, resultado;

    entrada_24(&valorCompra, &valorPago);
    processamento_24(&valorCompra, &valorPago, &c, &d, &u, &troco, &resultado);
    saida_24(c, d, u, resultado);
}

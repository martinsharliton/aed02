#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao19.h"

void entrada_19(float *a, float *b, float *c){
    printf("Entre com a medida \"a\": ");
    scanf("%f", a);
    printf("Entre com a medida \"b\": ");
    scanf("%f", b);
    printf("Entre com a medida \"c\": ");
    scanf("%f", c);

}

void processamento_19(float *a, float *b, float *c){
    if(*a == *b && *b == *c){
        printf("\nEQUILATERO");
    }else if (*a == *b || *b == *c || *a == *c){
        printf("\nISOSCELES");
    }else{
        printf("\nESCALENO");
    }
}

void questao19(){
    float ladoA, ladoB, ladoC;

    entrada_19(&ladoA, &ladoB, &ladoC);
    processamento_19(&ladoA, &ladoB, &ladoC);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "questao23.h"

void entrada_23(float *percuso, char *tipo){
    printf("Entre com o percuso em Km: ");
    scanf("%f", percuso);
    printf("Entre com o tipo do carro [A, B, C]: ");
    scanf("%s", tipo);
}

void processamento_23(float *percuso, char *tipo, float *combustivel){
    *tipo = tolower(*tipo);

    switch(*tipo){
        case 'a':
            *combustivel = *percuso / 8.0;
            printf("\nO carro consumiu %g litros de combustivel", *combustivel);
            break;
        case 'b':
           *combustivel = *percuso / 9.0;
           printf("\nO carro consumiu %g litros de combustivel", *combustivel);
           break;
        case 'c':
           *combustivel = *percuso / 12.0;
            printf("\nO carro consumiu %g litros de combustivel", *combustivel);
            break;
        default:
            printf("\nTipo de carro invalido\n!!");
    }
}

void questao23(){
    float percursoPercorrido, combustivel;
    char tipoCarro[50];

    entrada_23(&percursoPercorrido, &tipoCarro);
    processamento_23(&percursoPercorrido, &tipoCarro, &combustivel);
}

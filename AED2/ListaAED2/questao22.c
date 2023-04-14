#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

void entrada_22(char *nome[20], int *eleitores){
    printf("Informe o nome do municipio \n");
    scanf("%s", nome);
    printf("Informe a quantidade de eleitores \n");
    scanf("%d", eleitores);

}
void processamento_22(char *nome, int *eleitores, int *mvotado){

    if(*eleitores <= 200000){
        printf("\nNa cidade de %s nao havera 2o turno. \n", nome);
    }else{
        printf("Informe a quantidade de votos do candidato mais votado: ");
        scanf("%d",mvotado);

        if(*mvotado <= *eleitores / 2.0){
            printf("\nNa cidade de %s havera 2o turno.\n", nome);
        }else{
            printf("\nNa cidade de %s nao havera 2o turno.\n", nome);
        }
    }
}

void questao22(void){
    int nome, eleitores, mais_votado;

    entrada_22(&nome, &eleitores);
    processamento_22(&nome, &eleitores, &mais_votado);
}


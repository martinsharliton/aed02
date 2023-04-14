#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void entrada_04(float *s, float *p){
    printf("Entre com o salario antigo: ");
    scanf("%f", s);
    printf("Entre com a porcentagem: ");
    scanf("%f", p);
}

void processamento_04(float *s, float *p, float *ns){
    *ns =  *s + ((*s) * (*p)) / 100.0;
}

void saida_04(float ns){
    printf("\nNovo salario: %.2f", ns);
}

void questao04(){
    float salario, porecentagem, novoSalario;

    entrada_04(&salario, &porecentagem);
    processamento_04(&salario, &porecentagem, &novoSalario);
    saida_04(novoSalario);
}

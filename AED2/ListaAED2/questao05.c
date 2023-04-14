#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entrada_05(float *sBa, int *dep){
    printf("Entre com o seu salario base: ");
    scanf("%f", sBa);
    printf("Entre com o numero de dependentes: ");
    scanf("%d", dep);
}

void processamento_05(float *sBa, int *dep, float *sBr, float *sLiq){
    *sBr = *sBa + ((*dep) * (32.0));
    *sLiq = *sBr - ((*sBr) * (27.5)) / 100.0;
}

void saida_05(float sLiq){
    printf("\nSalario liquido: %.2f", sLiq);
}

void questao05(){
    float sal_base, sal_bruto, sal_liq;
    int dependentes;

    entrada_05(&sal_base, &dependentes);
    processamento_05(&sal_base, &dependentes, &sal_bruto, &sal_liq);
    saida_05(sal_liq);
}

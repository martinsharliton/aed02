#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#include "questao07.h"

void entrada_07(float *r){
    printf("Entre com o valor do raio: ");
    scanf("%f", r);
}

void processamento_07(float *r, float *p, float *a, float *d, float *v){
   *d = 2 * (*r);
   *p = 2 * PI * (*r);
   *a = PI * ((*r) * (*r));
   *v = ((4 * PI) / 3.0) * ((*r) * (*r) * (*r));
}

void saida_07(float d, float p, float a, float v){
    printf("\nDiametro eh: %g", d);
    printf("\nPerimetro eh: %g", p);
    printf("\nArea eh: %g", a);
    printf("\nVolume: %g", v);
}

void questao07(){
    float raio, perimetro, area, diametro, volume;

    entrada_07(&raio);
    processamento_07(&raio, &perimetro, &area, &diametro, &volume);
    saida_07(diametro, perimetro, area, volume);
}

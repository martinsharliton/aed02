#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao21.h"

void entrada_21(int *a, int *b, int *c){
    printf("Entre com o numero 1: ");
    scanf("%d", a);
    printf("Entre com numero 2: ");
    scanf("%d", b);
    printf("Entre com numero 3: ");
    scanf("%d", c);
}

void processamento_21(int *a, int *b, int *c, int *maior, int *meio, int * menor){
    if(*a == *b && *b == *c){
        *maior = *a;
        *meio = *b;
        *menor = *c;
    }else{
        if(*a > *b && *a > *c){
            *maior = *a;
            if(*b > *c){
                *meio = *b;
                *menor = *c;
            }else{
                *meio = *c;
                *menor = *b;
            }
        }else if(*b > *a && *b > *c){
            *maior = *b;
            if(*a > *c){
                *meio = *a;
                *menor = *c;
            }else{
                *meio = *c;
                *menor = *a;
            }
        }else{
            *maior = *c;
            if(*a > *b){
                *meio = *a;
                *menor = *b;
            }else{
                *meio = *b;
                *menor = *a;
            }
        }
    }
}

void saida_21(int maior, int meio, int menor){
    printf("\nNumeros em ordem crescente: %d, %d e %d", menor, meio, maior);
}

void questao21(){
    int a, b, c, maior, meio, menor;

    entrada_21(&a, &b, &c);
    processamento_21(&a, &b, &c, &maior, &meio, &menor);
    saida_21(maior, meio, menor);
}

#include <stdio.h>
#include <stdlib.h>
#define COMPRIMENTO 10

void bubbleSort(int vetor[], int tam){
    int i, j, aux;

    for(i = 1; i < tam; i++){
        for(j = 0; j < tam - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void insertionSort(int vetor[], int tam){
    int i, j, aux;

    for(i = 0; i < tam - 1; i++){
        if(vetor[i] > vetor[i + 1]){
            aux = vetor[i + 1];
            vetor[i + 1] = vetor[i];
            vetor[i] = aux;
            j = i - 1;

            while(j >= 0){
                if(aux < vetor[j]){
                    vetor[j + 1] = vetor[j];
                    vetor[j] = aux;
                }else{
                    break;
                }
                j = j - 1;
            }
        }
    }
}

void selectionSort(int vetor[],int tam){
    int i, j, menor, aux;

    for(i = 0; i < tam - 1; i++){
        menor = i;
        for(j = i + 1 ; j < tam; j++){
            if(vetor[menor] > vetor[j])
                menor = j;
        }
        if(i != menor){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
}

int main(){
   int listaNumeros[COMPRIMENTO] = {-13, 8, -19, 14, 6, -10, 17, 2, -15, 11}, i;

   printf("Elementos nao ordenados:\n");
   for(i = 0; i < COMPRIMENTO; i++){
        printf("%d   ", listaNumeros[i]);
   }

   bubbleSort(listaNumeros, COMPRIMENTO);
   //insertionSort(listaNumeros, COMPRIMENTO);
   //selectionSort(listaNumeros, COMPRIMENTO);

   printf("\n\nElementos ordenados:\n");
   for(i = 0; i < COMPRIMENTO; i++){
        printf("%d   ", listaNumeros[i]);
   }
   return 0;
}

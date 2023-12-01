#include <stdio.h>
#include <stdlib.h>
#define COMPRIMENTO 10

// ALTEREI = 30/11/2023

void bubbleSort(int vetor[], int tam){
    printf("\n\n---- BUBBLE SORT ----");
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
    printf("\n\n---- INSERTION SORT ----");
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
    printf("\n\n---- SELECTION SORT ----");
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

void merge(int vetor[], int inicio, int meio, int fim) {
    int tamanho1 = meio - inicio + 1;
    int tamanho2 = fim - meio;

    int* ladoEsquerdo = (int*)malloc(tamanho1 * sizeof(int));
    int* ladoDireito = (int*)malloc(tamanho2 * sizeof(int));

    int i, j, k;

    for (i = 0; i < tamanho1; i++)
        ladoEsquerdo[i] = vetor[inicio + i];
    for (j = 0; j < tamanho2; j++)
        ladoDireito[j] = vetor[meio + 1 + j];

    i = 0;
    j = 0;
    k = inicio;

    while (i < tamanho1 && j < tamanho2) {
        if (ladoEsquerdo[i] <= ladoDireito[j]) {
            vetor[k] = ladoEsquerdo[i];
            i++;
        } else {
            vetor[k] = ladoDireito[j];
            j++;
        }
        k++;
    }

    while (i < tamanho1) {
        vetor[k] = ladoEsquerdo[i];
        i++;
        k++;
    }

    while (j < tamanho2) {
        vetor[k] = ladoDireito[j];
        j++;
        k++;
    }

    free(ladoEsquerdo);
    free(ladoDireito);
}

void mergeSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

int partition(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio - 1;
    int j, temp;

    for (j = inicio; j <= fim - 1; j++) {
        if (vetor[j] < pivo) {
            i++;
            temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
    }

    temp = vetor[i + 1];
    vetor[i + 1] = vetor[fim];
    vetor[fim] = temp;

    return i + 1;
}

void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = partition(vetor, inicio, fim);
        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

int main() {
    int listaNumeros[COMPRIMENTO] = {-13, 8, -19, 14, 6, -10, 17, 2, -15, 11}, i;

    printf("Elementos nao ordenados:\n");
    for (i = 0; i < COMPRIMENTO; i++) {
        printf("%d   ", listaNumeros[i]);
    }

    // bubbleSort(listaNumeros, COMPRIMENTO);
    // insertionSort(listaNumeros, COMPRIMENTO);
     selectionSort(listaNumeros, COMPRIMENTO);
    // mergeSort(listaNumeros, 0, COMPRIMENTO - 1);
    // quickSort(listaNumeros, 0, COMPRIMENTO - 1);

    printf("\nElementos ordenados:\n");
    for (i = 0; i < COMPRIMENTO; i++) {
        printf("%d   ", listaNumeros[i]);
    }

    return 0;
}

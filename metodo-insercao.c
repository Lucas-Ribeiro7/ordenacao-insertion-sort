#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

void lerVetor(int vetor[], int tamanho){
    for(int i = 1; i <= tamanho; i++){
        printf("Vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    } 
}

void escreverVetor(int vetor[], int tamanho){
    for(int i = 1; i <= tamanho; i++){
        printf(" %d ", vetor[i]);
    }
}

void insertionSort(int vetor[], int tamanho){
    int aux, j;
    for(int i = 2; i <= tamanho; i++){
        aux = vetor[i];
        j = i - 1;
        while((j >= 1) && (aux < vetor[j])){
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
    }
    
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM];

    lerVetor(vetor, TAM);

    printf("\nVetor desordenado: ");
    escreverVetor(vetor, TAM);

    insertionSort(vetor, TAM);

    printf("\nVetor ordenado: ");
    escreverVetor(vetor, TAM);
    
    return 0;
}

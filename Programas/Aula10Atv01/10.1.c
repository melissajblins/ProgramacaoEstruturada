#include <stdio.h>
#include <stdlib.h>

int* bubblesort(int *vetorfuncao, int tamanhovetor){
    int parada, auxiliar;

    do {
        parada = 0;
        for (int linha = 0; linha < tamanhovetor-1; linha++){
            if (vetorfuncao[linha] < vetorfuncao[linha+1]){
                auxiliar = vetorfuncao[linha];
                vetorfuncao[linha] = vetorfuncao[linha+1];
                vetorfuncao[linha+1] = auxiliar;
                parada = 1;
            }
        }
        tamanhovetor--;
    }while(parada != 0);
    return vetorfuncao;
}


void main(){
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int linha = 0; linha < tamanho; linha++){
        scanf("%d", &vetor[linha]);
    }

    vetor[tamanho] = bubblesort(vetor, tamanho);

    for (int linha = 0; linha < tamanho; linha++){
        printf("%d", vetor[linha]);
    }
}

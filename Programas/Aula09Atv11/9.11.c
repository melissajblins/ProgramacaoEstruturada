#include <stdio.h>
#include <stdlib.h>

int* somando(int vetor1[], int vetor2[], int tamanhodovetor){
   int *ponteirofuncao = NULL;

    ponteirofuncao = (int*) malloc(tamanhodovetor * sizeof(int));

    if (ponteirofuncao == NULL){
        printf("Erro!");
        exit(1);
    }

    for (int linha = 0; linha < tamanhodovetor; linha++){
      ponteirofuncao[linha] = vetor1[linha] + vetor2[linha];
    }

    return ponteirofuncao;

}

void main(){
   int *ponteiroprincipal = NULL;
    int tamanho, linha;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetora[tamanho], vetorb[tamanho];

    for (linha = 0; linha < tamanho; linha++){
        scanf("%d", &vetora[linha]);
    }

    for (linha = 0; linha < tamanho; linha++){
        scanf("%d", &vetorb[linha]);
    }

    ponteiroprincipal = somando(vetora, vetorb, tamanho);

    for (linha = 0; linha < tamanho; linha++){
        printf("%d ", ponteiroprincipal[linha]);
    }

    free(ponteiroprincipal);
    ponteiroprincipal = NULL;
}


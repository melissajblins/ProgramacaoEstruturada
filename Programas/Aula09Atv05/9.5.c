#include <stdio.h>
#include <stdlib.h>

int* vetores(int);

void main(){
    int *ponteiroprincipal = NULL;
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    ponteiroprincipal = vetores(tamanho);

    for (int linha = 0; linha < tamanho; linha++){
        printf("%d ", ponteiroprincipal[linha]);
    }

    free(ponteiroprincipal);
    ponteiroprincipal = NULL;

}

int* vetores(int tamanhovetor){
    int *ponteirofuncao = NULL;

    ponteirofuncao = (int *) malloc (tamanhovetor*sizeof(int));

    if (ponteirofuncao == NULL){
        printf("Erro!");
        exit(1);
    }

    for (int linha = 0; linha < tamanhovetor; linha++){
        printf("Digite um numero: ");
        scanf("%d", &ponteirofuncao[linha]);
    }

    return ponteirofuncao;

    free(ponteirofuncao);
    ponteirofuncao = NULL;
}

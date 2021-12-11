#include <stdio.h>
#include <stdlib.h>

int* somando(int matrizes[3][3]){
    int *ponteirofuncao = NULL;
    int soma0 = 0, soma1 = 0, soma2 = 0;

    ponteirofuncao = (int*) malloc(3*sizeof(int));

    if (ponteirofuncao == NULL){
        printf("Erro!");
        exit(1);
    }

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            if (coluna == 0){
                soma0 = soma0 + matrizes[linha][coluna];
            } else if (coluna == 1){
                soma1 = soma1 + matrizes[linha][coluna];
            } else{
                soma2 = soma2 + matrizes[linha][coluna];
            }
        }
    }

    ponteirofuncao[0] = soma0;
    ponteirofuncao[1] = soma1;
    ponteirofuncao[2] = soma2;

    return ponteirofuncao;
}

void main(){
    int *ponteiroprincipal = NULL;

    int matriz[3][3];

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    ponteiroprincipal = somando(matriz);

    for (int linha = 0; linha < 3; linha++){
            printf("%d ", ponteiroprincipal[linha]);
    }

    free(ponteiroprincipal);
    ponteiroprincipal = NULL;
}


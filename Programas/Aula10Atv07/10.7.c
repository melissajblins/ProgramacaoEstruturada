#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int* insertionsort(int *vetorfuncao, int tamanhofuncao){
    int linha = 0, coluna = 0, atual = 0;
    for (linha = 0; linha < tamanhofuncao; linha++){
        atual = vetorfuncao[linha];
        coluna = linha;
        while (coluna > 0 && atual < vetorfuncao[coluna-1]){
            vetorfuncao[coluna] = vetorfuncao[coluna-1];
            coluna--;
        }
        vetorfuncao[coluna] = atual;
    }
    return vetorfuncao;
}


void main(){
    int tamanho, linha,coluna, *ponteiroprincipal, contador = 1;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    ponteiroprincipal = (int*) malloc(contador*sizeof(int));
    if (ponteiroprincipal == NULL){
        printf("Erro!");
        exit(1);
    }

    for (linha = 0; linha < tamanho; linha++){
        scanf("%d", &ponteiroprincipal[linha]);
        ponteiroprincipal = insertionsort(ponteiroprincipal, contador);
        for (coluna = 0; coluna < linha+1; coluna++){
            printf("%d ", ponteiroprincipal[coluna]);
        }
       contador++;
       ponteiroprincipal = (int*) realloc(ponteiroprincipal, contador*sizeof(int));
       if (ponteiroprincipal == NULL){
            printf("Erro!");
            exit(1);
        }
        printf("\n");
    }
    free(ponteiroprincipal);
    ponteiroprincipal = NULL;
}


#include <stdio.h>
#include <stdlib.h>

int* produtomatrizvetor(int matrizfuncao[3][3], int vetorfuncao[]){
    int *ponteirofuncao = NULL;

    ponteirofuncao = (int*) malloc(3*sizeof(int));

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            ponteirofuncao[linha] += (vetorfuncao[coluna]*matrizfuncao[linha][coluna]);
        }
    }

    return ponteirofuncao;
}


void main(){
    int *ponteiroprincipal = NULL;
    int matrizprincipal[3][3], vetorprincipal[3];
    int linha;

    for (linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            scanf("%d", &matrizprincipal[linha][coluna]);
        }
    }

    for (linha = 0; linha < 3; linha++){
        scanf("%d", &vetorprincipal[linha]);
    }

    ponteiroprincipal = produtomatrizvetor(matrizprincipal, vetorprincipal);

    for (linha = 0; linha < 3; linha++){
        printf("%d ", ponteiroprincipal[linha]);
    }

    free(ponteiroprincipal);
    ponteiroprincipal = NULL;

}

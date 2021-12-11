#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ponteiroprincipal = NULL;
    int linha, coluna, numerodelinhasecolunas;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &numerodelinhasecolunas);

    ponteiroprincipal = (int*) malloc(numerodelinhasecolunas * numerodelinhasecolunas * sizeof(int));

    for (linha = 0; linha < numerodelinhasecolunas; linha++){
        for (coluna = 0; coluna < numerodelinhasecolunas; coluna++){
            if (linha == coluna){
                ponteiroprincipal[linha * numerodelinhasecolunas + coluna] = 1;
            } else{
                ponteiroprincipal[linha *numerodelinhasecolunas + coluna] = 0;
            }
        }
    }

    for (linha = 0; linha < numerodelinhasecolunas; linha++){
        for (coluna = 0; coluna < numerodelinhasecolunas; coluna++){
            printf("%d", ponteiroprincipal[linha * numerodelinhasecolunas + coluna]);
        }
    printf("\n");
    }

    free(ponteiroprincipal);
    ponteiroprincipal = NULL;
}

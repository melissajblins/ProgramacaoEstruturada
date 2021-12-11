#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ponteirovetor = NULL;
    int linha, coluna, numerodelinhas, numerodecolunas, valorverificado, verificador = 0;

    printf("Digite o numero de linhas: ");
    scanf("%d", &numerodelinhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &numerodecolunas);

    printf("Digite o valor a ser verificado: ");
    scanf("%d", &valorverificado);

    ponteirovetor = (int *) malloc(numerodelinhas * numerodecolunas * sizeof(int));

    for (linha = 0; linha < numerodelinhas; linha++){
        for(coluna = 0; coluna < numerodecolunas; coluna++){
            printf("Digite um numero: ");
            scanf("%d", &ponteirovetor[linha * numerodecolunas + coluna]);
        }
    }

    for (linha = 0; linha < numerodelinhas; linha++){
        for(coluna = 0; coluna < numerodecolunas; coluna++){
            if (ponteirovetor[linha * numerodecolunas + coluna] == valorverificado){
                verificador = 1;
            }
        }
    }

    printf("%d", verificador);

    free(ponteirovetor);
    ponteirovetor = NULL;
}

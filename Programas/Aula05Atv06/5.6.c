#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz[3][3];
    int vetor[3];
    int linha, coluna;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
        vetor[linha] = 0;
    }

    for(coluna = 0; coluna < 3; coluna++){
        for(linha = 0; linha < 3; linha++){
            vetor[coluna] = vetor[coluna] + matriz[linha][coluna];
        }
    }

    for(linha = 0; linha < 3; linha++){
        printf("%d ", vetor[linha]);
    }

}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int linha, coluna, tamanho = 0;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tamanho);

    int numeros[tamanho][tamanho];

    for(linha = 0; linha < tamanho; linha++){
        for(coluna = 0; coluna < tamanho; coluna++){
            if (linha == coluna){
                numeros[linha][coluna] = 1;
            } else{
                numeros[linha][coluna] = 0;
            }
        }

    }

    for(linha = 0; linha < tamanho; linha++){
        for(coluna = 0; coluna < tamanho; coluna++){
            printf("%d ", numeros[linha][coluna]);
        }
        printf("\n");
    }

}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[3][3];
    int linha, coluna, soma = 0;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            scanf("%d", &numeros[linha][coluna]);
        }
    }
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            if((linha == 0 && coluna == 1) || (linha == 0 && coluna == 2) || (linha == 1 && coluna == 2)){
                soma = soma + numeros[linha][coluna];
            }
        }
    }
    printf("Soma: %d", soma);
}

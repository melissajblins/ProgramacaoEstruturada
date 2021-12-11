#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[4][4];
    int linha, coluna, soma = 0;

    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            scanf("%d", &numeros[linha][coluna]);
        }
    }
    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            if((linha == 1 && coluna == 0) || (linha == 2 && coluna == 0)|| (linha == 3 && coluna == 1) || (linha == 3 && coluna == 2) || (linha == 0 && coluna == 1) || (linha == 0 && coluna == 2 ) || (linha == 1 && coluna == 3 ) || (linha == 2 && coluna == 3)){
                soma = soma + numeros[linha][coluna];
            }
        }
    }
    printf("Soma: %d", soma);
}

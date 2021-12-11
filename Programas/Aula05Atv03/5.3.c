#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[4][4];
    int linha, coluna, maiores10 = 0, negativos = 0;

    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna <4; coluna++){
            scanf("%d", &numeros[linha][coluna]);
        }
    }
    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            if(numeros[linha][coluna] > 10){
                maiores10++;
            } else if(numeros[linha][coluna] < 0){
                negativos++;
            }
        }
    }
    printf("Qtd. >10: %d\n", maiores10);
    printf("Qtd. <0: %d\n", negativos);
}

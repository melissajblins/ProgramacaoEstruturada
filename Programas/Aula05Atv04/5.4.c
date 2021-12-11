#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[3][3];
    int linha, coluna, principal = 0, secundaria = 0;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            scanf("%d", &numeros[linha][coluna]);
        }
    }
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            if(linha == coluna){
                principal = principal + numeros[linha][coluna];
                if (linha == 1 && coluna == 1){
                    secundaria = secundaria + numeros[linha][coluna];
                }
            } else if((linha == 0 && coluna == 2) || (linha == 2 && coluna == 0)){
                secundaria = secundaria + numeros[linha][coluna];
            }
        }
    }



    printf("Soma diagonal principal: %d\n", principal);
    printf("Soma diagonal secundaria: %d \n", secundaria);
}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[3][3];
    int linha, coluna, contador = 0, maior, menor;

    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            printf("Digite um numero para a %d linha e %d coluna: ", linha, coluna);
            scanf("%d", &numeros[linha][coluna]);
            if (contador == 0){
                maior = numeros[linha][coluna];
                menor = numeros[linha][coluna];
            } else {
                if (numeros[linha][coluna] < menor){
                    menor = numeros[linha][coluna];
                } else if (numeros[linha][coluna] > maior){
                    maior = numeros[linha][coluna];
                }
            }
            contador++;
        }
    }
    printf("Maior: %d\n", maior);
    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            if (numeros[linha][coluna] == maior){
                printf("Posicao (maior): %d linha e %d coluna \n", linha, coluna);
            }
        }
    }
    printf("Menor: %d\n", menor);
    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            if (numeros[linha][coluna] == menor){
                printf("Posicao (menor): %d linha e %d coluna \n", linha, coluna);
            }
        }
    }

}

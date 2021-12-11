#include <stdio.h>
#include <stdlib.h>

void main(){
    int numeros[8];
    int contador, x, y, soma;

    for(contador = 0; contador < 8; contador++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[contador]);
    }

    do {
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        if (x < 0 || x >= 8){
            printf("Valor de X invalido! \n ");
        }
    } while (x < 0 || x >= 8);

        do {
        printf("Digite o valor de y: ");
        scanf("%d", &y);
        if (y < 0 || y >= 8){
            printf("Valor de Y invalido! \n");
        }
    } while (y < 0 || y >= 8);

    soma = numeros[x] + numeros[y];
    printf("Soma eh: %d", soma);
}

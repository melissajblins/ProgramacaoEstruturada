#include <stdio.h>
#include <stdlib.h>

void main(){
    int A[6];
    int contador, soma = 0;

    for(contador = 0; contador < 6; contador++){
        printf("Digite um numero: ");
        scanf("%d", &A[contador]);
        if (contador == 0 || contador == 1 || contador == 5){
            soma = soma + A[contador];
        }

    }

    A[4] = 100;
    printf("A soma eh: %d. \n", soma);

    for (contador = 0; contador < 6; contador++){
        printf("%d \n", A[contador]);
    }
}

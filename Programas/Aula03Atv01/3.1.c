#include <stdio.h>
#include <stdlib.h>

void main(){

    int numero, contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (contador <= numero) {
        printf("%d  ", contador);
        contador = contador + 1;
    }

    printf(" \n");
    contador = numero;
    while (contador >= 0){
        printf("%d ", contador);
        contador = contador - 1;
    }
}

#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero, contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (contador <= numero){
        if (contador % 2 != 0){
            printf("%d ", contador);
        }
        contador = contador + 1;
    }

    printf("\n0 ");
    contador = 1;
    while (contador <= numero){
        if (contador % 2 == 0){
            printf("%d ", contador);
        }
        contador = contador + 1;
    }
}

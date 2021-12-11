#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero, contador;

    do {
        printf("Digite um numero maior ou igual a 0: ");
        scanf("%d", &numero);
        if (numero < 0){
            printf("O numero deve ser >=0! \n");
        }
    } while (numero < 0);

    contador = numero;
    while (contador >=0){
        printf("%d ", contador);
        contador = contador -1;
    }
    printf("\nFIM!");
}
